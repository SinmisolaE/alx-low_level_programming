#include "main.h"
/**
 * _puts_recursion - prints a string using recursion
 * @s: the string
 */

void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(char *s);
	}
}
