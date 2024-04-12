#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array using jump search
 * @array: the sorted array
 * @size: size of array
 * @value: value to search for in array
 * Return: index of value, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int low, high, step, i;

	low = 0;
	step = (int)(sqrt(size));
	high = step;
	
	if (!array)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", low, array[low]);

	while ((array[high] < value) && high < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", high, array[high]);
		low = high;
		high += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", low, high);

	for (i = low; i <= fmin(high, (int)size - 1); i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
