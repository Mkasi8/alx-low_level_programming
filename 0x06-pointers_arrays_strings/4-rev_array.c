#include "main.h"

/**
 * reverse_array -  function that reverses an integer array
 * @a: array to reverse
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
