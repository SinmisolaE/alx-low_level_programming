#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: character to be checked
 * Return: returns 1 if true else 0
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	return (0);
}
