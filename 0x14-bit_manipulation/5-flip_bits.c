#include "main.h"

/**
 * flip_bits - number of bits to flip to get from one number to another
 * @n: number
 * @m: other number
 * Return: num bits required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	int i = 0;

	xor_result = n ^ m;

	while (xor_result > 0)
	{
		if (xor_result & 1)
			i++;
		xor_result >>= 1;
	}
	return (i);
}
