#include "main.h"

/**
 * is_prime_number - tells if a number is prime
 * @n: number
 * @i: counter
 * Return: 0 or 1
 */

int helper(int n, int i);
int is_prime_number(int n);
{
	return (helper(n, 0));
}

/**
 * helper - returns 1 or 0
 * @n: number
 * @i: counter
 * Return: 1 or 0
 */

int helper(int n, int i)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
		return (1);
	else if (i >= n / 2)
		return (1);
	else if (n % i == 0)
		return (0);
	else
		return (helper(n, i + 1));
	return (1);
}
