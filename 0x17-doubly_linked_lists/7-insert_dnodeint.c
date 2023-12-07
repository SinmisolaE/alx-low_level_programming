#include "lists.h"
#include <stdlib.h>

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

	while (curr)
	{
		if (i == idx)
		{
			new->next = curr;
			new->prev = curr->prev;
			curr->prev->next = new;
			curr->prev = new;
			return (new);
		}
		else
		{
			curr = curr->next;
			i++;
		}
	}
	return (NULL);
}
