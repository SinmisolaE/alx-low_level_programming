#include "lists.h"

/**
 * get_nodeint_at_index - gets node at an index
 * @head: the list
 * @index: the index
 * Return: the value(int)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *run = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		run = run->next;

		if (!run)
			return (NULL);
	}
	return (run);
}
