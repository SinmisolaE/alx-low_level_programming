#include "function_pointers.h"

/**
 * array_iterator - func that executes a func on an arry
 * @array: the array
 * @size: size of array
 * @action: func being passed
 * Return: nain
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
