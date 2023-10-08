#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory to an array
 * @nmemb: arrray
 * @size: numBytes
 * Return: Null if error, else array with 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *t;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		t[i] = 0;
	return (t);
}
