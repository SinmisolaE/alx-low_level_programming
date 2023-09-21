#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: first variable
 * @src: sec variable
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		b++;
	}
	for (i = 0; i < b; i++)
		dest[a + i] = src[i];
	dest[a + b] = '\0';
	return (dest);
}
