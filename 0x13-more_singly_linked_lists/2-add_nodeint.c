#include "lists.h"

/**
 * add_nodeint - adds a node at begnng of list
 * @head: the list
 * @n: the new int node
 * Return: addr of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
