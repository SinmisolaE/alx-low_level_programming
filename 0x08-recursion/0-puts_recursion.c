#include "main.h"
/**
 * _puts_recursion - prints a string using recursion
 * @s: the string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(++*s);
		_putchar(*s);
	}
}
