#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and inititalizes it
 * with a specific char
 *
 * @size: integer argument size of char array
 * @c: character argument
 *
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int y;

	if (size == 0)
	{
		return (NULL);
	}

	x = malloc(sizeof(char) * size);

	if (x == NULL)
	{
		return (NULL);
	}

	for (y = 0; y < size; y++)
	{
		x[y] = c;
	}

	return (x);

	free(x);
}
