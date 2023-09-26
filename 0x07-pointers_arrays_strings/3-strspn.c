#include "main.h"
/**
 * _strspn - gets length
 * @s: first nvar
 * @accept: second pointer
 * Return: returns numBytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				n++;
				break;
			}
			else if (accept[n] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
