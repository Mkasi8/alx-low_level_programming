#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be manipulated
 */

void puts_half(char *str)
{
	int length, i;

	for (length = 0; str[length] != '\0'; length++)
	{
	}

	i = (length - 1) / 2;

	while (str[i] != str[length-1])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
