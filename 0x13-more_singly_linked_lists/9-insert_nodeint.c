#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node anywhere in the list
 * @head: the list
 * @idx: index for new node to be added
 * @n: the val of new node
 * Return: addr of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *run = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (!*head && idx > 0)
		return (NULL);

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}

	for (i = 0; i < idx - 1; i++)
	{
		run = run->next;

		if (!run)
			return (NULL);
	}
	new->next = run->next;
	run->next = new;
	return (run->next);
}
