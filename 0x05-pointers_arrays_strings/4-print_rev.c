#include "main.h"

/**
 * print_rev - prints the characters of a string in reverse
 *
 * @s: the string to be reversed
 */

void print_rev(char *s)
{
	int i;

	int length;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	while (s[i] != s[0])
	{
		_putchar(s[length - 1]);
		length--;
	}

	_putchar('\n');
}


