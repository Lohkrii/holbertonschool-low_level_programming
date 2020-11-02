#include "lists.h"

/**
 * listint_len - calculates the amount of elements in a linked list
 * @h: head of the list
 * Return: amount of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
