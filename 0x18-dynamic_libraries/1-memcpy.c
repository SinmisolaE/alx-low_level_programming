#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory to be changed
 * @src: changed by this
 * @n: the number of bytes
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
