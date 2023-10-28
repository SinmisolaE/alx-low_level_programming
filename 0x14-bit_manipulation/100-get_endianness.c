#include "main.h"

/**
 * get_endianness - gets endianness
 * Return: 1 if litttle endianness, else 0
 */
int get_endianness(void)
{
	int num = 1;

	char *ptr = (char *)&num;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
