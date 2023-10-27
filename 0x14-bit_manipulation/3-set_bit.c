#include "main.h"

/**
 * set_bit - sets bit at an index
 * @n: the num
 * @index: the index
 * Return: 1 if worked, else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	mask = 1U << index;

	*n |= mask;
	return (1);
}
