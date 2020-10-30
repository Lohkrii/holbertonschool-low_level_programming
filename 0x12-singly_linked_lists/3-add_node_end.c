#include "lists.h"

/**
 * add_node_end -Adds node at the end of a list.
 * @head: Is the address of the Head of the list.
 * @str: Is the string inside the given node.
 * Return: Returns the adress of the new element or NULL if failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int idx;
	list_t *new;
	list_t *temp;
	temp = *head;

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
		new->str = strdup(str);
		for (idx = 0; *(str + idx); idx++)
			;
		new->len = idx;
	}
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
