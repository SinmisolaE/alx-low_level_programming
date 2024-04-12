#include "search_algos.h"

int binary_adv(int *array, int low, int high, int value);

/**
 * advanced_binary - finds a value in an sorted array using binary search
 * advanced, it finds the first value in case of reoccurence
 * @array: sorted array
 * @size: size of the array
 * @value: value to search for
 * Return: index if found, else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low, high;

	low = 0;
	high = (int)size - 1;

	return (binary_adv(array, low, high, value));
}

/**
 * binary_adv - finds a value in sorted array
 * @array: the array
 * @low: first index
 * @high: last index
 * @value: the value to search for
 * Return: index if found, else -1
 */
int binary_adv(int *array, int low, int high, int value)
{
	int i, mid;

	if ((low > high) || !array)
		return (-1);

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
	{
		if (array[mid - 1] == value)
			high = mid;
		else
			return (mid);
	}
	if (array[mid] > value)
		high = mid - 1;
	else if (array[mid] < value)
		low = mid + 1;

	return (binary_adv(array, low, high, value));
}
