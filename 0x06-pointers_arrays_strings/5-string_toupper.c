#include "main.h"
/**
 * string_toupper - to upper
 * @s: value
 * Return: returns upper
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			return (s[i] - 32);
		i++;
	}
}
