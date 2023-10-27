#include "main.h"

/**
 * print_binary - prints an int in binary
 * @n: the int
 * Return - nain
 */
void print_binary(unsigned long int n)
{
	unsigned int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1U << 31;

	while ((mask & n) == 0)
		mask >>= 1;

	while (mask > 0)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
