#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: the list
 * Return: nain
 */
void free_listint2(listint_t **head)
{
	listint_t *run = *head;
	listint_t *next_node;

	while (run)
	{
		next_node = run->next;
		free(run);
		run = next_node;
	}
}
