#include "main.h"
/**
 * print_line - prints a straight line
 * @n: variable to be checked
 * Return: returns result
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

