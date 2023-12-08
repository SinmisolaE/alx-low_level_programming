#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: the head of list
 * @idx: the idx
 * @n: value of node
 * Return: addr of node else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr;
	dlistint_t *new;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	curr = *h;
	i = 0;

	if (!*h && idx == 0)
	{
		*h = new;
		return (*h);
	}
	else if (!*h && idx != 0)
		return (NULL);
	if (*h && idx == 0)
	{
		new->next = (*h)->next;
		new->prev = NULL;
		*(h)->prev = new;
		*h = new;
		return (*h);
	}
	while (curr)
	{
		if (i == idx)
		{
			new->next = curr;
			new->prev = curr->prev;
			if (curr->prev)
				curr->prev->next = new;
			curr->prev = new;
			return (new);
		}
		curr = curr->next;
		i++;
	}
	return (NULL);
}
