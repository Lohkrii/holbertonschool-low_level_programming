#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Hash table to delete. (pointer)
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *head, *iterator;

	for (idx = 0; idx < ht->size; idx++)
	{
		head = ht->array[idx];
		iterator = head;
		while (head != NULL)
		{
			head = head->next;
			free(iterator->key);
			free(iterator->value);
			free(iterator);
			iterator = head;
		}
	}
	free(ht->array);
	free(ht);
}
