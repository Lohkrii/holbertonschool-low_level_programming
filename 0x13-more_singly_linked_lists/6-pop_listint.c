#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list and\
 * returns the head node's data.
 * @head: Is the head Node.
 * Return: Returns the node's data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int store;

	if (head == NULL)
	{
		if (*head != NULL)
		{
			store = (*head)->n;
			temp = (*head)->next;
			free(head);
			*head = temp;
		}
	}
	return (store);
}
