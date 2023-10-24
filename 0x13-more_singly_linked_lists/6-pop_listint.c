#include "lists.h"

/**
 * pop_listint - delete a node
 * @head: the list
 * Return: node removed
 */
int pop_listint(listint_t **head)
{
	int n = (*head)->n;
	listint_t *first = *head;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	free(first);
	return (n);
}
