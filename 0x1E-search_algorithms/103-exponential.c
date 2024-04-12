#include "search_algos.h"

int binary(int *array, int low, int high, int value);

/**
 * exponential_search - finds for a value in an array using exponential search
 * @array: sorted array of integers
 * @size: the size of the array
 * @value: valur=e to search for in array
 * Return: index of the value, else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);
	i = 0;
	if (array[i] == value)
		return (i);

	i++;

	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n"
		, i / 2, (i < (int)size - 1 ? i : (int)size - 1));

	return (binary(array, i / 2, (i < (int)size - 1 ? i : (int)size - 1), value));
}

/**
 * binary - uses binary to complete the search
 * @array: the sorted array
 * @low: first index
 * @high: last index of array
 * @value: valeu to search for in array
 * Return: index of value, else -1
 */
int binary(int *array, int low, int high, int value)
{
	int mid, i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
				printf(", ");
		}
		printf("\n");

		mid = (high + low) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
