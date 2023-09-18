#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: variable to be checked
 * Return: returns nothing
 */
void print_rev(char *s)
{
	int count = 0;
	int i;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (i = count; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
