#include "main.h"

/**
 * isprime - detects prime number
 * @i: int
 * @j: int
 * Return: 1 if the number is prime, 0 if otherwise
 */

int isprime(unsigned int i, unsigned int j)
{
	if (i % j == 0)
	{
		if (i == j)
			return (1);
		else
			return (0);
	}
	return (0 + isprime(i, j + 1));
}

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, otherwise return 0
 *
 * @n: int
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (isprime(n, 2));
}
