#include "main.h"

/**
 * print_alphabet - prints the alphabets
 *
 * Return: returns void
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
