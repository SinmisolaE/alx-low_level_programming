#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: the list
 * Return: nain
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;

	while (*head)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
	head  = NULL;
}
