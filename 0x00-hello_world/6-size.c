#include <stdio.h>

/**
 * main - the main method
 *
 * Return: returns 0
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(long long int));
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(float));

	return (0);
}
