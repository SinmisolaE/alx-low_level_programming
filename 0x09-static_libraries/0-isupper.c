#include "main.h"
/**
 * _isupper - the method
 * @c: variable to be checked
 * Return: returns 1 if uppercase, else 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
