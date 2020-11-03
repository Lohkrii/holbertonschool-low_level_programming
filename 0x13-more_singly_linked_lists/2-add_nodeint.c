#include "lists.h"

/**
 * add_nodeint - Adds node to the head of a linked list.
 * @head: Is the head of the list.
 * @n: Is ht integer inside the node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
