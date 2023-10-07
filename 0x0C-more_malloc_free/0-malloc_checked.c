#include "main.h"
/**
 * malloc_checked - aloccates memory
 * @b: size of parameter
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(b);
	if (t == NULL)
		exit(98);
	return (t);
}
