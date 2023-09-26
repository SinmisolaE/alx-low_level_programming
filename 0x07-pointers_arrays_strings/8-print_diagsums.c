#include "main.h"
/**
 * print_diagsums - print diagsum
 * @a: the var
 * @size: size of var
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
	}

	for (i = 0; i < size; i++)
	{
		sum2 += *(a - i);
	}
	printf("%d, %d\n", sum1, sum2);
}