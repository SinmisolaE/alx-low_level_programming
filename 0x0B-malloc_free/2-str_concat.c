#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first str
 * @s2: second str
 * Return: return null if error, else concat of strings
 */

char *str_concat(char *s1, char *s2)
{
	char *t;
	int i = 0;
	int j = 0;
	int n, c, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	b = i + j;

	t = malloc(sizeof(char) * (b + 1));
	if (t == NULL)
		return (NULL);
	for (n = 0; n < i; n++)
		t[n] = s1[n];
	for (c = 0; c < j; c++)
		t[i + c] = s2[c];
	t[b] = '\0';
	return (t);
}
