#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 * @key: Is the key of a node in a hash-table.
 * @size: Is the size of the array of the hash_table.
 * Return: Returns the index at which the value of the key should be stored in the array
 * of the hash table. Or NULL for error.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2((unsigned char *)key);
	idx = idx % size;
	return (idx);
}
