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

	if (size == 0)
		Return('\0');

	t = (int *)malloc(size * sizeof(char));
	return (t);

}
