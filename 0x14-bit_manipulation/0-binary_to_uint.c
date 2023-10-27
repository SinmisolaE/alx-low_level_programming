#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary
 * Return: the int num, else 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum <<= 1;
		if (b[i] == '1')
			sum++;
		i++;
	}
	return (sum);
}
