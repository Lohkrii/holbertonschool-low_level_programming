#include "lists.h"

/**
 * print_dlistint - Prints all nodes in a doubly linked list.
 * @h: Beggining of list.
 * Return: Node count.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t idx;

	for (idx = 0; h != NULL; idx++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (idx);
}
