#include "lists.h"
#include <string.h>

/**
 * add_node - pointer that returns address of new element
 * @head: the nodes present
 * @str: str to be added
 * Return: address
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[count])
		count++;

	new->len = count;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (*head);
}
