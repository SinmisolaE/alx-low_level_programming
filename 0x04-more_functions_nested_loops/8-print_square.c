#include "main.h"
/**
 * print_square - pritns square
 * @size: the amount to print
 * Return: returns value
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
