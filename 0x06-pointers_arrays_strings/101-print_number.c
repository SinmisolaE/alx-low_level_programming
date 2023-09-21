#include "main.h"
/**
 * print_number - prints an integer
 * @n: the var
 * Return: returns n
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 > 9)
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}
