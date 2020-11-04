#include "lists.h"

/**
 * sum_listint - Sums all of the n elements in a linked list.
 * @head: Is the Starting node in the linked list.
 * Return: The sum of all n elements in  linked list.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;
	int idx;

	for (idx = 0; temp != NULL; idx++)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
