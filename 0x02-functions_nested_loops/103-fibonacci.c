#include <stdio.h>

/**
 * main - main method
 * Return: 0
 */
int main(void)
{
	int i = 0;
	long a = 1;
	long b = 2;
	long next;
	long sum = 0;

	whlie (a < 4000000)
	{
		if (a % 2 ==0)
			sum += a;
		next = a + b;
		a = b;
		b = next;
	}
	printf("%lu\n", sum);
}
