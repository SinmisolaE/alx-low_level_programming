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
		*s++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
