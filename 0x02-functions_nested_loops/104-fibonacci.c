#include <stdio.h>

/**
 * main - main method
 * Return: 0
 */
int main(void)
{
	long a = 1, b = 2;
	long next;
	int i;

	for (i = 0; i < 98; i++)
	{
		if ( i == 97)
			printf("%lu\n", a);
		else
			printf("%lu, ", a);

		next = a + b;
		a = b;
		b = next;
	}
	return (0);
}
