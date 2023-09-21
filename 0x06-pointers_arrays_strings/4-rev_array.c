#include "main.h"
/**
 * reverse_array - reverses array
 * @a: the fisrt var
 * @n: num elements
 * Return: returns nain
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int ch;

	n--;
	while (n >= 0)
	{
		ch = a[x];
		a[x] = a[n];
		a[n] = ch;
		n--;
		x++;
	}
}
