#include <stdio.h>
/**
 * main - main method
 * @argc: count
 * @argv: the values
 * Return: 1 if error, else 0
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc == 3)
	{
		printf("Error\n");
		return (1);
	}
	a = argv[1] * argv[2];
	printf("%d\n", a);
	return (0);
}
