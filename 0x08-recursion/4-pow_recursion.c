#include "main.h"
/**
 * _pow_recursion - raise to power on recursion
 * @x: the value
 * @y: the power
 * Return: returns -1 if error, else ans
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
