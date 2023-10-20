#include "lists.h"

/**
 * free_list - frees list
 * @head: the list
 * Return: nain
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
