#include "main.h"
/**
 * _strncat - concatenate two numbers of a certain limit
 * @dest: first var
 * @src: second var
 * @n: limit
 * Return: returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	int i;

	while (dest[a] != '\0')
		a++;
	for (i = 0; i < n; i++)
	{
		while (src[b] != '\0')
		{
			dest[a] = src[b];
			a++;
			b++;
		}
	}
	if (src[i] == '\0')
		dest[a] = '\0';
	return (dest);
}
