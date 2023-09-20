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
		count2++;

	for (i = 0; i < count2; i++)
	{
		dest[count1 + i] = src[i];
	}
	dest[count1 + count2] = '\0';
	return (dest);
}
