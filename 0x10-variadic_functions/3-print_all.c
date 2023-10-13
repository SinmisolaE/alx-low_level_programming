#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything of main types
 * @format: types of args passed(i for int..etc)
 * Return: nain
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *separator = "";
	va_list la;

	va_start(la, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(la, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(la, int));
					break;
				case 'f':
					printf("%s", separator);
					printf("%f", va_arg(la, double));
					break;
				case 's':
					s = va_arg(la, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s%s", separator, s);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(la);
}
