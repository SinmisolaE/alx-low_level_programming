#include "lists.h"

/**
 * get_dnodeint_at_index - get node at an index
 * @head: the head of list
 * @index: the index
 * Return: addr of node at index else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr;
	unsigned int i;

	i = 0;
	curr = head;

	while (curr)
	{
		if (i == index)
			return (curr);
		i++;
		curr = curr->next;
	}
	return (NULL);
}
