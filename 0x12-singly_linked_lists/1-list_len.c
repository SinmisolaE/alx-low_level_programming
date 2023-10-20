#include "lists.h"

/**
 * list_len - length of list
 * @h: the list
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
