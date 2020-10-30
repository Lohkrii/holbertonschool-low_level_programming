#include "lists.h"

/**
 * free_list - Frees a list in memory.
 * @head: Is the list we want to clean.
 */

void free_list(list_t *head)
{
	list_t *node, *temp;

	node = head;
	while (node != NULL)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
}
