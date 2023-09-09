#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - the main method
 *
 * Return: returns 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int ch;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	 ch = n % 10;

	if (ch > 5)
		printf("Last digit of %d is %d and is greater than 5", n, ch);
	else if (ch == 0)
		printf("Last digit of %d is %d and is 0", n, ch);
	else if (ch < 6 && ch != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, ch);
	printf('\n');
	return (0);
}
