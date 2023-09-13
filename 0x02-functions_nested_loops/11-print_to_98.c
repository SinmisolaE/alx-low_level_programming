#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers from n to 98
 * @n: the variable to be checked
 * Return: returns nothing
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n > 9)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
			_putchar(n + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
}
