#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns sum of  all parameters
 * @n: number of arg
 * Return: 0 if  n = 0, else sum
 */
int sum_them_all(const unsigned int n, ...)
{

	unsigned int i, sum = 0;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
