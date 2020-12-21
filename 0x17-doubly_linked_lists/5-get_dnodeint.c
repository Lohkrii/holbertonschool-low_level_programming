#include "lists.h"
/**
* get_dnodeint_at_index - Finds the nth node of a dlistint_t linked list
* @head: Pointer to the first node of a dlistint_t linked list
* @index: The number of inex which node is to be found
* Return: The node at the index, otherwise NULL if node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;

	if (head == NULL)
		return (NULL);
	for (idx = 0; idx < index && head->next != NULL; idx++)
	{
		head = head->next;
	}
	if (idx == index)
		return (head);
	return (NULL);
}

