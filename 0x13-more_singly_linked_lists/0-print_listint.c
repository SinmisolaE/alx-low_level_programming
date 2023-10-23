#include "lists.h"

/**
 * print_listint - prints list
 * @h: the list
 * Return: number of elements in lists
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
