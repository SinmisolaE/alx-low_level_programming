#include <stdio.h>
/**
 * main - main method
 * @argc: num arg
 * @argv: values
 * Return: nain
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
