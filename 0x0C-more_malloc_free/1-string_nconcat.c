#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first str
 * @s2: second str
 * @n: first n bytes of s2
 * Return: Null if error, else concatenated str
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	int i, j, x;
	int count1 = 0;
	int count2 = 0;


	while (s1 && s1[count1])
		count1++;
	while (s2 && s2[count2])
		count2++;

	if (n >= count2)
	{
		t = malloc(sizeof(char) * (count1 + count2 + 1));
		if (t == NULL)
			return (NULL);
		for (i = 0; i < count1; i++)
			t[i] = s1[i];
		for (j = 0; j < count2; j++)
			t[i + j] = s2[j]
	}
	else
	{
		t = malloc(sizeof(char) * (count1 + n + 1));
			if (t == NULL)
				return (NULL);
			for  (i = 0; i < count1; i++)
				t[i] = s1[i];
			for (x = 0; x < n; x++)
				t[i + x] = s2[x];
	}
	t[i + x] = '\0';
	return (t);
}
