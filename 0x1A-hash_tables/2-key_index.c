#include "hash_tables.h"
/**
 * key_index - finds the index of a key
 * @key: key
 * @size: array's size
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0, hash = 0;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
