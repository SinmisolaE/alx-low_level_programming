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
	int i, ch;

	while (a[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		ch = a[x];
		a[x] = a[i];
		a[i] = ch;
		i--;
		x++;
	}
}
