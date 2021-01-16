#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: The hash table to add to.
 * @key: Key of the value being added.
 * @value: Value being added.
 * Return: 1 for success, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int idx;
	unsigned long int size;
	hash_node_t *new_node = NULL;
	hash_node_t *head = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	size = ht->size;

	idx = key_index((unsigned char *)key, size);
	head = ht->array[idx];
	while (head != NULL)
	{
		if (strcmp(key, head->key) == 0)
		{
			free(head->value);
			head->value = (strdup(value));
			return (1);
		}
		head = head->next;
	}
	if(head)
	{
		new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);

		new_node->key = strdup(key);
		new_node->next = ht->array[idx];
		ht->array[idx] = new_node;
	}

	return (1);
}
