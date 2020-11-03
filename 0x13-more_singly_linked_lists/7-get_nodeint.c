#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a linked list.
 * @head: Is the Head of the linked list
 * @index: is the indexed node that is goint to be returned.
 * Return: Returns the address of the index node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	if (temp != NULL)
	{
		while (count != index)
		{
			temp = temp->next;
			count++;
			if (temp == NULL)
			{
				return (NULL);
			}
		}
		return (temp);
	}
	return (NULL);
}