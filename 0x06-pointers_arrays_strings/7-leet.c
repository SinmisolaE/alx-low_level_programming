#include "main.h"
/**
 * leet - encoding string
 * @s: first var
 * Return: returns s
 */

char *leet(char *s)
{
	int j;
	int i = 0;
	char f1 = "aAeEoOtTlL";
	char f2 = "4433007711";

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == f1[j])
				s[i] = f2[j];
			j++;
		}
		i++;
	}
	return (s);
}
