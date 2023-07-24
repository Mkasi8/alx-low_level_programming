#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be manipulated
 */

void puts_half(char *str)
{
	int length, i, n;

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	i = (length - 1) / 2;

	for (n = i + 1; str[n] != '\0'; i++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
