#include "main.h"

/**
 * _print_rev_recursion - prints a strinf in reverse
 * @s: string to reverse
 * return void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
