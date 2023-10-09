#include "main.h"
#include <stdlib.>

/**
 * _isdigit - checks if number is digit
 * @s:str
 * @Return: 0 if false else 1
 */
int _isdigit(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

