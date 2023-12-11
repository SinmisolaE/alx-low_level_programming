#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: represents value
 * Return: returns 1 if true else 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
