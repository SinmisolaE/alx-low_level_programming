#include "main.h"
/**
 * print_array - print n elements
 * @a: variable first
 * @n: sec variable
 * Return: returns nain
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
		printf("%d, ", a[i]);
	printf("%d", a[n - 1]);
	printf("\n");
}
