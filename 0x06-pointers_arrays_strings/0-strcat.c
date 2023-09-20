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
	int count1 = 0;
	int count2 = 0;

	while (dest[count1] != '\0')
		count1++;
	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count1++;
		count2++;
	}
	dest[count1] = '\0';
	return (dest);
}
