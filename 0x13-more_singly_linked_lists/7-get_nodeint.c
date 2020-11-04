#include "lists.h"

/**
 * get_nodeint_at_index -returns the nth nide of the list
 * @head: current head of the list
 * @index: index of the desired node
 * Return: the nthh node, if it does not exist return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *traverse = head;
	unsigned int i = 0;

	while (traverse != NULL)
	{
		if (i == index)
			return (traverse);
		i++;
		traverse = traverse->next;
	}

	return (NULL);
}
