#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Is the pointer to the head node.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
