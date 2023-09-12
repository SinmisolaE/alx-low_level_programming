#include "main.h"

/**
 * _abs - computes absolute value
 *
 * @j: the character to be checked
 * Return: returns 0
 */

int _abs(int j)
{
	if (j < 0)
		return (-1 * j);
	else
		return (j);
}
