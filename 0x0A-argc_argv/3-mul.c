#include <stdio.h>

/**
 * _atoi - converts string to int
 * @n: string to be converted
 * Return: converted value
 */

int _atoi(char *n)
{
	int b, c, d, length, f, i;

	b = 0;
	c = 0;
	d = 0;
	length = 0;
	f = 0;
	i = 0;

	while (n[length] != '\0')
		len++;
	while (b < length && f == 0)
	{
		if (s[b] == '-')
			++c;
		if (s[b] >= '0' && s[b] <= '9')
		{
			i = s[b] - '0';
			if (c % 2)
				i = -i;
			d = d * 10 + i;
			f = 1;
			if (s[b + 1] < '0' || s[b + 1] > '9')
				break;
			f = 0;
		}
		b++;
	}
	if (f == 0)
		return (0);
	return (d);
}


/**
 * main - main method
 * @argc: count
 * @argv: the values
 * Return: 1 if error, else 0
 */

int main(int argc, char *argv[])
{
	int a;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	a = num1 * num2;
	printf("%d\n", a);
	return (0);
}
