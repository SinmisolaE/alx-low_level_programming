#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: the hash table
 * Return: nain
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma = 0;
	hash_node_t *h;

	if (!ht)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma == 1)
				printf(", ");
			h = ht->array[i];
			while (h)
			{
				printf("'%s': '%s'", h->key, h->value);
				h = h->next;
				if (h)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
