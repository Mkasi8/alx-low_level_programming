#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to square root
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (helper(n, 0));
}

/**
 * helper - return square root
 * @n: number
 * @i: count
 * Return: sqrt
 */

int helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
	{
		return (i);
	}
	else
		return (helper(n, i + 1));

}
