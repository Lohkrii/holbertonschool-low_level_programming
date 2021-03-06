#include "lists.h"

/**
 * insert_nodeint_at_index - Instserts a node at a specified index.
 * @head: Is the top of the list.
 * @idx: Is the desired index for the new node.
 * @n: Is the data element of the new node.
 * Return: Returns the address of the new node or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int idx_run;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	if (head != NULL)
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		temp = *head;
		for (idx_run = 0; idx_run < idx - 1; idx_run++)
		{
			if (temp == NULL)
			{
				return (NULL);
			}
			temp = temp->next;
		}
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
	return (NULL);
}
