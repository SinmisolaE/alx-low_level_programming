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
	char *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	f = malloc(nmemb * size);
	if (f == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		f[i] = 0;
	return (f);
}
