#include "main.h"

/**
 * swap_int - swaps two value
 * @a: value to be checked
 * @b: second value to be checked
 * Return: returns nothing
 */
void swap_int(int *a, int *b)
{
	int *ch;

	*ch = *a;
	*a = *b;
	*b = *a;
}
