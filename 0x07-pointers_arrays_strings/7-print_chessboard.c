#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: the pointer
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int count = 0;

	while (a[count] != '\0')
		count++;

	for (i = 0; i < count; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
