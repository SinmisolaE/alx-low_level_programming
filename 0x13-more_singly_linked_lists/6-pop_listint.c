#include "lists.h"

/**
 * pop_listint - delete a node
 * @head: the list
 * Return: node removed
 */
int pop_listint(listint_t **head)
{
	if (!head || !*head)
		return (0);

	int n = (*head)->n;
	listint_t *first = (*head)->next;

	free(*head);
	*head = first;
	return (n);
}
