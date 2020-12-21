#include "lists.h"
/**
 * free_dlistint - free double linked list
 * @head: head of doubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	if (head == NULL)
		return;

	while (head)
	{
		copy = head;
		head = head->next;
		free(copy);
	}
}
