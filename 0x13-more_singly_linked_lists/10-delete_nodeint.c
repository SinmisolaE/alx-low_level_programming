#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node
 * @head: the list
 * @index: the index of node to be deleted
 * Return: 1 if succeed, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *run = *head;
	unsigned int i;
	listint_t *move, *check;

	if (!run)
		return (-1);

	if (index == 0)
	{
		check = (*head)->next;
		free(*head);
		*head = check;
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		run = run->next;

		if (!run)
			return (-1);
	}
	move = run->next;
	if (!move)
		return (-1);

	run->next = move->next;
	return (1);

}
