#include "search_algos.h"

int binary(int *array, int low, int high, int value);

/**
 * binary_search - searches for a value in an array using binary search
 * @array: the array
 * @size: size of array
 * @value: value to search for in array
 * Return: 1 if found else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int low, high;

	low = 0;
	high = ((int)size) - 1;

	return (binary(array, low, high, value));
}

/**
 * binary - searches for the value using binary search
 * @array: the array
 * @low: low index
 * @high: last index
 * @value: value to be searched for in the array
 * Return: 1 if found, else -1
 */
int binary(int *array, int low, int high, int value)
{
	int ch, i;

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

		ch = ((high - low) / 2) + low;

		if (array[ch] == value)
			return (ch);
		if (value > array[ch])
			low = ch + 1;
		if (value < array[ch])
			high = ch - 1;
	}
	return (-1);
}
