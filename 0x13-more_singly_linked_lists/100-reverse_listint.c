#include "lists.h"

/**
 * reverse_listint - Reverses a linked lists.
 * @head: Is the start of the list.
 * Return: Returns the head of the list or NULL if it failed.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev;

	if (head == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	prev = *head;
	temp = prev->next;
	*head = temp;
	prev->next = NULL;

	while (*head != NULL)
	{
		*head = (*head)->next;
		temp->next = prev;
		prev = temp;
		temp = *head;
	}
	*head = prev;
	return (*head);
}
