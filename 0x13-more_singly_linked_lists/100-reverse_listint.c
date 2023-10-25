#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: the list
 * Return: 1st  node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *previous = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	return (previous);
}
