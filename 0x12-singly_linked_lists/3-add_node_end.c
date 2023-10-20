#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: the list
 * @str: the new string/ node
 * Return: addr of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *run_node = *head;
	list_t *new;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
		i++;

	new->len = i;
	new->str = strdup(str);

	while (run_node)
		run_node = run_node->next;

	run_node = new;
	run_node->next = NULL;

	return (run_node);
}
