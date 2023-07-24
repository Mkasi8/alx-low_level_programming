#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @b: first integer
 * @a: second integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
