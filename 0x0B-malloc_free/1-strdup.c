#include "main.h"

/**
 * _strdup - function to  returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.i
 *
 * @str: string to duplicate
 * return: NULL if string = null, return pointer for success
 */

char *_strdup(char *str)
{
	char *new;

	int i, len;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++)

	new = malloc(sizeof(*new) * len);

	if (new == NULL)
		return (NULL);
 	for (i = 0; i < len; i++)
		new[i] = str[i];
	return (new);
}
