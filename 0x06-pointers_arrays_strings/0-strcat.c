#include "main.h"
/**
 * _strcat - concatenate strings
 * @dest: first string
 * @src: second string
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
