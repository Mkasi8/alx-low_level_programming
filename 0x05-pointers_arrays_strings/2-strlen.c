#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 *
 * @s: the string to return its value
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;
	
	while (s[i] != '\n')
		i++;
	return (i);
}
