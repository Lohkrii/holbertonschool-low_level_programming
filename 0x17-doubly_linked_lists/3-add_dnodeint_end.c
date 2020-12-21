#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of a doubly linked list
 * @head: head of doubly linked list
 * @n: int to add to node
 * Return: new address of node added
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *copy;

	if (head == NULL)
		return (NULL);

	copy = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	while (copy)
	{
		if (copy->next == NULL)
		{
			copy->next = new;
			new->next = NULL;
			new->prev = copy;
			return (new);
		}
		copy = copy->next;
	}
	return (NULL);
}

