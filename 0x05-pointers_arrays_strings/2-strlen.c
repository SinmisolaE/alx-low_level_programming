#include "main.h"
/**
 * _strlen - returns length of string
 * @s: variable to be checked
 * Return: returns length
 */
int _strlen(char *s)
{
	int counter;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
