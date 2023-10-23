#include "lists.h"

/**
 * pop_listint - delete a node
 * @head: the list
 * Return: node removed
 */
int pop_listint(listint_t **head)
{
	listint_t *first = *head;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	return (first->n);
}