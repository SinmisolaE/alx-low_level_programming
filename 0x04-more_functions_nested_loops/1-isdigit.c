#include "main.h"

/**
 * _isdigit - the method
 * @c: variable to be checked
 * Return: returns 1 if true, else 0
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
