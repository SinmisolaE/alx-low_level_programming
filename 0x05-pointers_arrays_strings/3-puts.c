#include "main.h"
/**
 * _puts - prints a string
 * @str: variable to be checked
 * Return: returns nothing
 */
void _puts(char *str)
{
	int counter = 0;
	int i;

	while (*str != '\0')
	{
		counter++;
		str++;
	}
	for (i = 0; i <= counter; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
