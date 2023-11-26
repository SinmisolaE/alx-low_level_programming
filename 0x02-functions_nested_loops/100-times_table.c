#include "main.h"

/**
 * print_times_table - prints time table
 * @n: the number
 * Return: nain
 */
void print_times_table(int n)
{
	int i, j, a, b;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				a = i * j;
				if (a > 99)
				{
					_putchar((a / 100) + '0');
					b = a % 100;
					_putchar((b / 10) + '0');
					_putchar((b % 10) + '0');
				}
				else if (a > 9)
				{
					_putchar((a / 10) + '0');
					_putchar((a % 10) + '0');
				}
				else
					_putchar(a + '0');
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
					if ((a > 9) && (a < 100))
						_putchar(' ');
					else if (a < 9)
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
				else
					_putchar('\n');
			}
		}
	}
}
