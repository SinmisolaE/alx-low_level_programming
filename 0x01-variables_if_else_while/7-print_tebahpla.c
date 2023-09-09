#include <stdio.h>

/**
 * main - the main method
 *
 * Return: returns 0
 */

int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
