#include "lists.h"

/**
 * print_listint - Prints all elements in a listint_t list.
 * @h: Is the head of the list.
 * Return: Returns the number of nodes or 1 for malloc error.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int count;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		printf("Error\n");
		return (1);
	}
	temp = h;
	if (h != NULL)
	{
		for (count = 0; temp->n != '\0'; count++)
		{
			printf("%i\n", temp->n);
			if (temp->next != NULL)
			{
				temp = temp->next;
			}
			else if (temp->next == NULL)
			{
				break;
			}
		}
	}
	return (count);
}
