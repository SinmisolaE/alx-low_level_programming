#include "hash_tables.h"

/**
 * key_index - creates index for a key
 * @key: the key
 * @size: size of array
 * Return: returns index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
