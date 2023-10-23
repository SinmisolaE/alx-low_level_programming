#include "lists.h"

/**
 * listint_len - goes through elements in the list
 * @h: the list
 * Return: num elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
