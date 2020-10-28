#include "lists.h"

/**
 * print_list - Prints all elements of a list.
 * @h: Argumented list.
 * Return: Returns the number of nodes.
*/

size_t print_list(const list_t *h)
{
	int idx;

	if (h == NULL)
	{
		return (0);
	}
	for (idx = 0; h != NULL; idx++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (idx);
}
