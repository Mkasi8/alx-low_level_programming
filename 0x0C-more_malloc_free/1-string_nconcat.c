#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatinates two strings
 * @s1: string to return or add another string to
 * @s2: string to copy to s1
 * @n: number of bytes to concatinate from s2
 *
 * Return: s1
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int i;

	unsigned int j;

	int len;

	int len1;

	for (len = 0; s1[len] != '\0'; len++)
	for (len1 = 0; s2[len1] != '\0')

	if (n < len1)
		ptr = malloc(len + n + sizeof(char) - 1);
	else
		ptr = malloc(len + len1 + sizeof(char));
	for (i = 0; i < len; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len1; j++)
		s1[i++] = s2[j];

	s1[i] = '\0';

	return (ptr);
}
