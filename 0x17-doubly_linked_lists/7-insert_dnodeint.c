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

	if (idx == 0)
		return (add_dnodeint(h, n));
	else if (!(*h))
		return (NULL);
	while (curr->prev)
		curr = curr->prev;

	while (curr)
	{
		if (i == idx)
		{
			if (!(curr->next))
				return (add_dnodeint_end(h, n));
			else
			{
				new->next = curr;
				new->prev = curr->prev;
				if (curr->prev)
					curr->prev->next = new;
				curr->prev = new;
			}
			break;
		}
		curr = curr->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	return (new);
}
