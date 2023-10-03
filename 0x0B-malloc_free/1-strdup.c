#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to duplicated string
 * @str: the string
 * Return: NULL if error, else returns string
 */

char *_strdup(char *str)
{
	char *t;
	int n = 0;
	int i;

	while (*str)
		n++;
	t = malloc(n * sizeof(char));
	if (*str == '\0')
		return (NULL);
	for (i = 0; i < n; i++)
		t[i] = str[i];
	return (t);

}
