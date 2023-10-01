#include "main.h"

int act_prime_number(int n, int i);

/**
 * is_prime_number - is prime number
 * @n: the number
 * Return: returns 1 is prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (act_prime_number(n, n - 1));
}

/**
 * act_prime_number - the technique
 * @n: number
 * @i: iteration
 * Return: if prime 1, else 0
 */
int act_prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	return (act_prime_number(n, i - 1));
}
