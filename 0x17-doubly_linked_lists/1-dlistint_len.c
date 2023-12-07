#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr;
	size_t length = 0;

	if (!h)
		return (0);
	curr = h;

	while (curr)
	{
		length++;
		curr = curr->next;
	}
	return (length);
}
