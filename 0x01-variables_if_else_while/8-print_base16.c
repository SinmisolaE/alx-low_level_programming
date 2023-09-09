#include <stdio.h>

/**
 * main - the main method
 *
 * Return: returns 0
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (ch = 'a' ; ch < 'g' ; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
