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

	while (str[count] != '\0')
	{
		count++;
		str++;
	}
	for (i = 0; i < count;)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
