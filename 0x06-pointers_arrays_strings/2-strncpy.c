#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: first variable
 * @src: sec var
 * @n: number of bytes to copy
 * Return: returns dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i < n) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
