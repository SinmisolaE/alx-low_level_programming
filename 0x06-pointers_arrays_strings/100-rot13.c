#include "main.h"
/**
 * rot13 - encode string using rot13
 * @s: var
 * Return: s
 */

char *rot13(char *s)
{
	int i = 0;
	int j;
	char f1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char f2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == f1[j])
			{
				s[i] = f2[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
