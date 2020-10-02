#include "hash_tables.h"
/**
 * hash_table_create - creation of empty hash_table
 * @size: hash table's size
 * Return: hash table empty but created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *vec;

	vec = malloc(sizeof(hash_table_t));
	if (!vec)
		return (NULL);

	vec->size = size;

	vec->array = calloc(size, sizeof(hash_node_t *));
	if (!(vec->array))
		return (NULL);

	return (vec);
}
