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
	int t = 0;

	while (*y != '\0')
	{
		count++;
		y++;
	}
	t = count - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
