#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to be changed
 * @b: value used to change s
 * @n: number of bytes
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
