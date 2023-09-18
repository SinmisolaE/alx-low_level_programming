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

	while (s[count] != '\0')
	{
		count++;
		s++;
	}
	for (i = 0; i < count;)
	{
		_putchar(s[i]);
		i += 2;
	}
	_putchar('\n');
}
