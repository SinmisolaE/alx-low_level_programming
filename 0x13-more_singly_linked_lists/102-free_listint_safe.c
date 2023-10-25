#include "lists.h"

/**
 * free_listint_safe - frees list
 * @h: the list
 * Return: size of list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i;
	listint_t *save;

	if (!*h)
	{
		return (0);
	}
	while (*h)
	{
		if ((*h)->next)
		{
			save = (*h)->next;
			free(*h);
			*h = save;
			i++;
		}
		else
		{
			free(*h);
			*h = NULL;
			i++;
		}
	}
	*h = NULL;
	return (i);
}
