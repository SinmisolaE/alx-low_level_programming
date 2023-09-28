#include "main.h"
/**
 * _puts_recursion - prints a string using recursion
 * @s: the string
 */

void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s++);
		_puts_recursion(char *s);
	}
	_putchar('\0');
	_putchar('\n');
}
