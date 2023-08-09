#include "main.h"

/**
 * create_array - creates array of chars and initializes with some character
 *
 * @size: size of the array
 * @c: The character to initialize with
 *Return: A pointer to the array or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(*arr)*size);
	if (arr == NULL)
		return (NULL);
	for (int i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
