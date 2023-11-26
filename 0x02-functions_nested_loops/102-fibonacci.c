#include <stdio.h>

/**
 * main - the main method
 * Return: 0
 */
int main(void)
{
	int next, i;
	int a = 1;
	int b = 2;

	for (i = 0; i < 50; i++)
	{
		if (i == 49)
			printf("%d\n", a);
		else
			printf("%d, ", a);
		next = a + b;
		a = b;
		b = next;
	}
	return (0);
}
