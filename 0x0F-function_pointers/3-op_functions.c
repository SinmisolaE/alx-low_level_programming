#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add inputs
 * @a: first num
 * @b: sec num
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts input
 * @a: first num
 * @b: sec num
 * Return: subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies num
 * @a: first num
 * @b: sec num
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides inputs
 * @a: first num
 * @b: sec num
 * Return: division, -1 if error
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of inputs
 * @a: first num
 * @b: sec num
 * Return: modulo, -1 if error
 */
int op_mod(int a, int b)
{
	return (a % b);
}
