#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of array
 * Return: address of table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (!(new->array))
		return (NULL);

	for (i = 0; i < size; i++)
		new->array[i] = NULL;

	return (new);
}
