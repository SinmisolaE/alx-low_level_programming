#include "main.h"
/**
 * _strlen_recursion - length of string
 * @s: the string
 * Return: returns length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		_strlen_recursion(s + 1);
	}
	if (*s == '\0')
		return (i);
}
