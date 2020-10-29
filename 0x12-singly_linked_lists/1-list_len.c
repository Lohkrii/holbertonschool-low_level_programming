#include "lists.h"

/**
 * list_len - return the number of elements in a linked list.
 * @h: This variable contains the pointer to the head of the list.
 * Return: Returns the number of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	int idx;

	if (h != NULL)
	{
		for (idx = 0; h != NULL; idx++)
		{
			h = h->next;
		}
	}
	return (idx);
}

