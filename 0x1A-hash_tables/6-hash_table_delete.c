#include "hash_tables.h"

/**
 * hash_table_delete - deletes the whole table
 * @ht: the table
 * Return: nain
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *h;
	hash_node_t *cp;
	unsigned long int count;
	hash_table_t *head = ht;


	count = ht->size;

	for (i = 0; i < count; i++)
	{
		if (ht->array[i])
		{
			h = ht->array[i];
			while (h)
			{
				cp = h->next;
				free(h->value);
				free(h->key);
				free(h);
				h = cp;
			}
		}
	}
	free(head->array);
	free(head);
}
