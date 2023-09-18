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
	char *y = str;

	while (*y != '\0')
	{
		count++;
		y++;
	}
	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
			_putchar(str[0]);
	}
	_putchar('\n');
}
