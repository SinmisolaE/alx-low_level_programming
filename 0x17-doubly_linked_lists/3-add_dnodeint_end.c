#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add nide at end of list
 * @head: the head of list
 * @n: value of node to add
 * Return: addr of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *curr;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		*head = new;
		return (*head);
	}
	curr = *head;
	while (curr->next)
	{
		curr = curr->next;
	}
	new->next = curr->next;
	new->prev = curr;
	curr->next = new;
	return (new);
}
