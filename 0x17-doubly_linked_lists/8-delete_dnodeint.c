#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - del node at indx
 * @head: the head of list
 * @index: the index to del
 * Return: 1 else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cur;
	unsigned int i;

	if (!*head)
		return (-1);
	if  (index == 0 && (*head)->next)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		return (1);
	}
	if (index == 0 && !((*head)->next))
	{
		*head = NULL;
		return (1);
	}
	cur = *head;
	i = 0;
	while (cur)
	{
		if (i == index)
		{
			if (cur->prev)
				cur->prev->next = cur->next;
			if (cur->next)
				cur->next->prev = cur->prev;
			return (1);
		}
		cur = cur->next;
		i++;
	}
	return (-1);
}
