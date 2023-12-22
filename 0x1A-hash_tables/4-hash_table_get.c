#include "hash_tables.h"

/**
 * hash_table_get - gets a value at a key
 * @ht: hash table
 * @key: the key
 * Return: value at key else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *h;

	if (!ht || !key)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);

	h = ht->array[i];

	while (h)
	{
		if (strcmp(h->key, key) == 0)
			return (h->value);
		h = h->next;
	}
	return (NULL);
}
