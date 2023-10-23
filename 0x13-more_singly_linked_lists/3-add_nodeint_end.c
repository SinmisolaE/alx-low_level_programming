#include "lists.h"

/**
 * add_nodeint_end - adds node at end of list
 * @head: the list
 * @n: the new node
 * Return: addr of new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *run_node = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (run_node == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		while (run_node->next)
			run_node = run_node->next;
		run_node->next = new;
		return (run_node->next);
	}
}
