#include "lists.h"

/**
 * print_listint_safe - prints list
 * @head: the list
 * Return: num nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;

	if (head == NULL)
	{
		exit(98);
	}

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}
	return (i);
}
