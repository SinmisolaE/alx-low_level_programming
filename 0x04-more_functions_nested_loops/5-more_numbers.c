#include "main.h"
/**
 * more_numbers - display numbers 10 times
 * Return: returns result
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = '1'; i <= '10'; i++)
	{
		for (j = '0'; j <= '14'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
