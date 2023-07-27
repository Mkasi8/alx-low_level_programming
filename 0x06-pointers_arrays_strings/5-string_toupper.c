#include "main.h"

/**
 * string_toupper - converts all lowercases in a string to upper
 * @n: string to convert
 * Return: n
 */

char *string_toupper(char *n)
{
	int i = 0;


	while (n[i] != '\0')
	{
		if (n[i] >= a && n[i] <= z)
		n[i] -= 32;
		i++;
	}
	return (n);
}
