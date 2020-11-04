#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a specified node.
 * @head: Is the start of the list.
 * @index: Is the node to be deleted.
 * Return: 1 if succeded, -1 if not.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *holder;
	unsigned int idx_run;

	if (head == NULL)
	{
		return (-1);
	}
	temp = *head;
	if (temp != NULL)
	{
		if (index == 0)
		{
			holder = temp->next;
			free(temp);
			*head = holder;
			return (1);
		}
		for (idx_run = 1; idx_run < index; idx_run++)
		{
			if (temp->next == NULL)
			{
				return (-1);
			}
			temp = temp->next;
		}
		holder = temp->next;
		temp->next = holder->next;
		free(holder);
		return (1);
	}
	return (-1);
}
