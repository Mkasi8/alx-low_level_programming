#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if character is alphabetic else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
