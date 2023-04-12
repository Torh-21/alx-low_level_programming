#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string argument
 *
 * @str: character argument
 *
 * Return: character pointer
 */
char *_strdup(char *str)
{
	char *x;
	int a, b;

	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; str[a] != '\0'; a++)
	{
	}

	x = malloc(sizeof(char) * (a + 1));

	if (x == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < a; b++)
	{
		x[b] = str[b];
	}

	x[a] = '\0';

	return (x);

	free(x);
}
