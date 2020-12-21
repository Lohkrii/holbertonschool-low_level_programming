#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in the linked
 * list
 * @head: head of linked list
 * Return: int sum of all the data in a linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *copy;
	int sum;

	copy = head;
	sum = 0;
	if (head == NULL)
		return (sum);

	while (copy)
	{
		sum += copy->n;
		copy = copy->next;
	}
	return (sum);
}
