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

	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (0);

	if (!key || !ht || (strcmp(key, "") == 0) || !value)
		return (0);

	item->key = strdup(key);
	if (!item->key)
		return (0);
	item->value = strdup(value);
	if (!item->value)
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);

	if (strcmp(key, ht->array[ind]->key) == 0)
	{
		ht->array[ind]->value = item->value;
		return (1);
	}
	item->next = ht->array[ind];
	ht->array[ind] = item;
	return (1);
}
