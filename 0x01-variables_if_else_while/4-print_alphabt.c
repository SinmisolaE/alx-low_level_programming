#include <stdio.h>

/**
 * main - the main method
 *
 * Return: returns 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i == 'q' || i == 'e')
			;
		else
			putchar(i);
	;
	putchar('\n');
}
