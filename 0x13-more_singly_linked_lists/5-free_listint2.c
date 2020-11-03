#include "lists.h"

/**
 * free_listint2 - Frees a linked list.
 * @head: Is the head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *crnt_node;

	if (head == NULL)
	{
		return;
	}
	temp = *head;
	if (head != NULL)
	{
		while (temp != NULL)
		{
			crnt_node = temp->next;
			free(temp);
			temp = crnt_node;
		}
	*head = NULL;
	}
}
