#include "hash_tables.h"

/**
 * hash_table_create - Initializes a new hash table.
 * @size: Is the size of the desired table.
 * Return: Returns a pointer to the newly created table, or NULL if failed.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int idx;

	/* Memory allocation of hash_table_t variable */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	/* Memory allocation of array pointers */
	new_table->array = malloc(size * sizeof(hash_node_t);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	for (idx = 0; idx < (new_table->size); idx++)
	{
		((new_table->array)[idx]) = NULL;
	}
	return (new_table);
}
