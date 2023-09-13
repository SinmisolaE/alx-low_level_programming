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
	int a;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			a = i * j;

			if (a > 9)
			{
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');

				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (i != 0)
					_putchar(' ');
				_putchar(a + '0');

				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');

	}
}
