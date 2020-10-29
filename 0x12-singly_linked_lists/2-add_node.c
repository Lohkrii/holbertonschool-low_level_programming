#include "lists.h"

/**
 * add_node - Adds a node at the beginning of a list.
 * @head: is the pointer to the current head node.
 * @str: Is the data held in the node.
 * Return: Returns the adress of the new node or returns NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int idx;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		new->str = NULL;
		new->len = 0;
	}
	else
	{
		for (idx = 0; *(str + idx) != '\0'; idx++)
			;
		new->str = strdup(str);
		new->len = idx;
	}
	new->next = *head;
	*head = new;
	return (new);
}
