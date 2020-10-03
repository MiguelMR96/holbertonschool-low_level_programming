#include "hash_tables.h"

/**
 * hash_table_set - add a new element in a hash table
 * @ht: pointer to hash_table
 * @key: element's key
 * @value: element's value
 * Return: 1 if succed or 0 if failed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index = 0;

	if (!ht || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->value = strdup(value);
	new_node->key = strdup(key);
	new_node->next = ht->array[index];

	ht->array[index] = new_node;
	return (1);
}
