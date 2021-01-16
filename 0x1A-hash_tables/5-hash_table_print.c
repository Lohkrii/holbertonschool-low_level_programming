#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Hash table to print.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *head;
	int first_element = 0;

	if (ht)
	{
		for (idx = 0; idx < ht->size; idx++)
		{
			head = ht->array[idx];
			while (head)
			{
				if (first_element == 0)
				{
					printf("{'%s': '%s'", head->key, head->value);
					head = head->next;
				}
				else
				{
					printf(", '%s': '%s'", head->key, head->value);
					head = head->next;
				}
			}
			if (idx == ht->size - 1 && first_element == 0)
			printf("{");
		}
		printf("}\n");
	}
}

