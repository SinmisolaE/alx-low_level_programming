#include "main.h"
/**
 * _puts_recursion - prints a string using recursion
 * @s: the string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	_putchar('\0');
	_putchar('\n');
}
