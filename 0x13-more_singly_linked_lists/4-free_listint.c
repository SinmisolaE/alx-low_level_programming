#include "lists.h"

/**
 * free_listint - frees list
 * @head: the list
 * Return: nain
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;
	listint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
