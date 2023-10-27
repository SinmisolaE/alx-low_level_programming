#include "main.h"

/**
 * get_bit - gets bit at an index
 * @n: the int num
 * @index: the index
 * Return: bit at that index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1U << index;

	if (mask & n)
		return (1);
	else
		return (0);
}
