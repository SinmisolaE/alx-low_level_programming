#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory
 * @ptr: pointer to memory
 * @old_size: size of ptr
 * @new_size: size of new pointer
 * Return: return null or ptr or new pointer(new_ptr)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *first_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	first_ptr = ptr;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = first_ptr[i];
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = first_ptr[i];
	}
	free(first_ptr);
	return (new_ptr);
}
