#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to 2 dimensional array
 * @width: horizontal
 * @height: vertical
 * Return: null on failure, else the array
 */

int **alloc_grid(int width, int height)
{
	int *t;
	int w, h;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = malloc(sizeof(int) * (width * height));
	if (t == NULL)
		return (NULL);
	for (w = 0; w < width; w++)
	{
		for (h = 0; h < height; h++)
			t[w][h] = 0;
	}
	return (t);
}
