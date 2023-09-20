#include "main.h"
/**
 * char *_strcpy - copy
 * @dest: first var
 * @src: another var
 * Return: returns dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*src != '\0')
	{
		l++;
		src++;
	}
	src--;
	for (; x < l; x++)
		dest[x] = src[x];
	dest[l] = '\0';
	return (dest);
}
