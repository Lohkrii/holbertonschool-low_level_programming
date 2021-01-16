#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key.
 * @ht: Hash table being searched.
 * @key: Key that links to the desired value.]
 * Return: Value associated with the key. Or NULL.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *head;

	if (ht == NULL || key == NULL)
		return (NULL);

	for (idx = 0; idx < ht->size; idx++)
	{
		head = ht->array[idx];
		while (head != NULL)
		{
			if (strcmp(key, head->key) == 0)
				return (head->value);
			head = head->next;
		}
	}
	return (NULL);
}
