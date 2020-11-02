#include "lists.h"

/**
 * listint_len - Return the number of elements in a linked list.
 * @h: Is the head pointer.
 * Return: Returns the number of elements.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int ecount;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		printf("Error\n");
		return (0);
	}
	if (h == NULL)
	{
		return (0);
	}
	if (h->n == '\0')
	{
		return (0);
	}
	temp = h->next;
	for (ecount = 1; temp->n != '\0'; ecount++)
	{
		if (temp->next == NULL)
		{
			ecount++;
			break;
		}
		temp = temp->next;
	}
	return (ecount);
}
