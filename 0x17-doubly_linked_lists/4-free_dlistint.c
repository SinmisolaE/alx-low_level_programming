#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free list
 * @head: head of list
 * Return: nain
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;
	dlistint_t *next;

	curr = head;

	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
