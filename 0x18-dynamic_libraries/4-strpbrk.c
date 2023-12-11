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

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
