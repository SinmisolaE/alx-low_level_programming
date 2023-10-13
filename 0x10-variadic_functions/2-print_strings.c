#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print strings
 * @separator: str printed btw each string
 * @n: number of args
 * Return: nain
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list t;

	va_start(t, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(t, char *);
		if (s  == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if ((i != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
	va_end(t);
}
