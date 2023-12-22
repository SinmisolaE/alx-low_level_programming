#include "hash_tables.h"

/**
 * hash_table_set - adds an element to table
 * @ht: the table
 * @key: key to be added
 * @value: value of key
 * Return: 1 for success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int ind;
	unsigned long int i;

	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (0);

	if (!key || !ht || (strcmp(key, "") == 0) || !value)
	{
		free(item);
		return (0);
	}

	item->key = strdup(key);
	if (!item->key)
	{
		free(item);
		return (0);
	}
	item->value = strdup(value);
	if (!item->value)
	{
		free(item);
		free(item->key);
		return (0);
	}

	ind = key_index((const unsigned char *)key, ht->size);

	for (i = ind; ht->array[i]; i++)
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = item->value;
			return (1);
		}
	}
	item->next = ht->array[ind];
	ht->array[ind] = item;
	return (1);
}
