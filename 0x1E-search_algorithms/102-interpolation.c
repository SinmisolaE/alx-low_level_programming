#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a array using interpolation
 * @array: a sorted array to search the value
 * @size: size of array
 * @value: the value to search for
 * Return: the index of where the value is located, else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	low = 0;
	high = (int)size - 1;

	while (low <= high)
	{
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}
		pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
		if (value >= array[low] && value <= array[high])
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = (int)pos + 1;
		else
			high = (int)pos - 1;
	}
	return (-1);
}
