#include "main.h"
#include <stdlib.h>
/**
 * array_range - arrange array of integers
 * @min: lowest number
 * @max: highest number
 * Return: return NULL if error, else array of integer
 */

int *array_range(int min, int max)
{
	int *c;
	int i;
	int x = 0;

	if (min > max)
		return (NULL);
	c = malloc(sizeof(int) * ((max - min) - 1));
	if (c == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		c[x] = i;
		x++;
	}
	return (c);
}
