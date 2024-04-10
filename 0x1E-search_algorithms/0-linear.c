#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search
 * @array: the array
 * @size: size of array
 * @value: value to search for in array
 * Return: 1 if found, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
