#include "main.h"
/**
 * create_array - create array of chars
 * @size: size
 * @c: the char
 * Return: Returns pointer, Null if error
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	t = malloc(size * sizeof(char));
	if (size == 0 || t == NULL)
		return (NULL);
	for (i = 0 i < size; i++)
		t[i] = c;
	return (t);
}
