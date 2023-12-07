#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - prints elements of list
 * @h: the head
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t num = 0;

	if (!h)
		return (0);

	curr = h;
	while (curr)
	{
		printf("%d\n", curr->n);
		num++;
		curr = curr->next;
	}
	return (num);
}
