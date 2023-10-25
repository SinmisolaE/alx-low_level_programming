#include "lists.h"

/**
 * pop_listint - delete a node
 * @head: the list
 * Return: node removed
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *first;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	first = (*head)->next;

	free(*head);
	*head = first;
	return (n);
}
