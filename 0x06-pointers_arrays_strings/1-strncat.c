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

	while (dest[a] != '\0')
		a++;
	while ((b < n) && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
