#include "main.h"
/**
 * _puts_recursion - prints a string using recursion
 * @s: the string
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		s++;
		_putchar('\n');
	}
}
