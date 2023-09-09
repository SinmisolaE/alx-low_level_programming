#include <stdio.h>

/**
 * main - the main method
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	int a;

	for (i = 0 ; i < 10 ; i++)
		for (a = 0 ; a < 10 ; a++)
			putchar(i + '0');
			putchar(a + '0');
			putchar(', ');
	putchar('\n');
	return (0);
}
