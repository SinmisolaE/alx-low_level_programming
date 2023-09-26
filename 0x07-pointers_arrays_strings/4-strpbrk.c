#include "main.h"
/**
 * _strpbrk - seraches a string
 * @s: checks for char
 * @accept: from this var
 * Return: returns the pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int count = 0;

	while (accept(count) != '\0')
		count++;

	while (*s)
	{
		for (i = 0; i < count; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
