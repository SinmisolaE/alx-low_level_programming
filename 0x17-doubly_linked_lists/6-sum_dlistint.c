#include "lists.h"

/**
 * sum_dlistint - adds the values in list
 * @head: head of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	int sum;

	curr = head;
	sum = 0;

	if (!head)
		return (0);
	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
