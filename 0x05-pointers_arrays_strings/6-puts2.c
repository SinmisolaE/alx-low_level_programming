#include "main.h"
/**
 * puts2 - prints evr=ery other char
 * @str: variable
 * Return: returns vain
 */
void puts2(char *str)
{
	int count = 0;
	int i;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[0]);
	}
	_putchar('\n');
}
