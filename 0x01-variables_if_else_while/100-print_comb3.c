#include <stdio.h>

/**
 * main - the main method
 *
 * Return: returns 0
 */

int main(void)
{
	int b;
	int e;

	for (b = 0 ; b < 10 ; b++)
	{
		for (e = 0 ; e < 10 ; e++)
		{
			if (!((b == e) && (b > e)))
			{
				putchar(b + '0');
				putchar(e + '0');

				if (!((b == 8) && (e == 9)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);

}
