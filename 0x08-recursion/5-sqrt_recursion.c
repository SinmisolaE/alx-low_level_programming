#include "main.h"

int act_sqr_root_recursion(int n, int i);

/**
 * _sqrt_recursion - checks sqr
 * @n: number
 * Return: returns -1 if error
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (act_sqr_root_recursion(n, 0));
}

/**
 * act_sqr_root_recursion - the technique
 * @n: the number
 * @i: iteration
 * Return: returns the sqr
 */

int act_sqr_root_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (act_sqr_root_recursion(n, i + 1));
}
