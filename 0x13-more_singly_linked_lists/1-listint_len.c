#include "lists.h"

/**
 * listint_len - Return the number of elements in a linked list.
 * @h: Is the head pointer.
 * Return: Returns the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	unsigned int ecount;

	for (ecount = 0; h != NULL; ecount++)
	{
		h = h->next;
	}
	return (ecount);
}
