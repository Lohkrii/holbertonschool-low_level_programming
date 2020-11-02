#include "lists.h"

/**
 * print_listint - Prints all elements in a listint_t list.
 * @h: Is the head of the list.
 * Return: Returns the number of nodes or 1 for malloc error.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}

