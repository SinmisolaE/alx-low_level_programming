#include <stdio.h>

/**
 * main - the main method
 * Return: 0
 */
int main(void)
{
	long next;
	long a = 1, b = 2;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i == 49)
			printf("%lu\n", a);
		else
			printf("%lu, ", a);
		next = a + b;
		a = b;
		b = next;
	}
	return (0);
}
