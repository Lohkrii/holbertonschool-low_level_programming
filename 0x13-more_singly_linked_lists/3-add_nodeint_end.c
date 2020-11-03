#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the tail of a list.
 * @head: Is the pointer to the head of the list.
 * @n: Is the integer to be stored in the node.
 * Return: Returns the adress of the node or NULL if failed.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
