#include "main.h"
/**
 * times_table - create a times table of the first 9 numbers
 *
 * Return: returns nothing
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');

	}
}
