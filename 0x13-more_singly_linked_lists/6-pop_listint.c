#include "lists.h"

/**
 * pop_listint - delete a node
 * @head: the list
 * Return: node removed
 */
int pop_listint(listint_t **head)
{
	int n = (*head)->n;
	listint_t *first = (*head)->next;

	if (!head || !(*head))
		return (0);
	free(*head);
	*head = first;
	return (n);
}
