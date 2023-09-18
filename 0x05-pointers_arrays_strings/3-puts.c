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

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	for (i = 0; i < counter; i++)
	{
		_putchar(s[i]);
	}
}
