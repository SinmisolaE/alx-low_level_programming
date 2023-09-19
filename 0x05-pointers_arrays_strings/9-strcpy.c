#include "main.h"
/**
 * *_strcpy - copy
 * @dest: first var
 * @src: another var
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int r = 0;

	while (*(src + l) != '\0')
		l++;
	for (; x < l; x++)
		dest[x] = src[x];
	dest[l] = '\0';
	return (dest);
}
