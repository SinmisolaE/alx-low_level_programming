#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints int numbers
 * @separator: the string printed btw numbers
 * @n: number of int numbers being passed
 * Return: nain
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i;
	va_list a;

	va_start(a, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", va_arg(a, int));
		else if (separator == NULL)
			printf("%d", va_arg(a, int));
		else
			printf("%d%s", va_arg(a, int), separator);
	}
	printf("\n");
	va_end(a);

}
