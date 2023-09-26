#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character
 * Return: returns pointer or null
 */
char *_strchr(char *s, char c)
{
	int i;
	int n = 0;

	while (s[n] != '\0')
		n++;
	for (i = 0; i < n; i++)
	{
		if (s[i] == c)
			return (&(s + i));
	}
}
