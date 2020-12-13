#include "lists.h"

/**
 * dlistint_len - Returns the number of ellements in a linked list.
 * @h: The head of the list.
 * Return: Returns the length of a string.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length;

	for (length = 0; h; length++)
	{
		h = h->next;
	}
	return (length);
}
