#include "lists.h"

/**
 * sum_listint - adds erything in the list
 * @head: the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *run = head;
	int sum;

	if (!run)
		return (0);

	while (run)
	{
		sum += run->n;
		run = run->next;
	}
	return (sum);
}
