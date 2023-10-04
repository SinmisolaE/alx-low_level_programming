#include "main.h"

/**
 * print_last_digit - function to print the last digit of a number
 * @n: character to be checked
 * Return: returns the value
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (a < 0)
		a = a * -1;
	_putchar(a + '0');
	return (a);
}
