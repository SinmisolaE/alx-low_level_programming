#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name passed
 * @f: a function pointer where a function is passed
 * Return: if NULL, naun
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
