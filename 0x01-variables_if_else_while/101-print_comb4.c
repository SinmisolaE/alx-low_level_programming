#include <stdio.h>

/**
 * main - the main method
 *
 * Return: returns 0
 */

int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			for (c = 0 ; c < 10 ; c++)
			{
				if (!((a == b) || (a > b) || (b == c) || (b > c) || (a == c) || (a > c)))
				{
					putchar(a);
					putchar(b);
					putchar(c);

					if (!((a == 7) && (b == 8) && (c == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
