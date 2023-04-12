#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: character argument
 * @s2: character argument
 *
 * Return: character
 */
char *str_concat(char *s1, char *s2)
{
	char *x;
	int a, b, c, d;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (a = 0; s1[a] != '\0'; a++)
	{
	}

	for (b = 0; s2[b] != '\0'; b++)
	{
	}

	x = malloc(sizeof(char) * (a + b + 1));

	if (x == NULL)
	{
		return (NULL);
	}

	for (c = 0; c < a; c++)
	{
		x[c] = s1[c];
	}

	for (d = 0; d < (a + b - 1); d++)
	{
		x[a + d] = s2[d];
	}

	x[a + b - 1] = '\0';

	return (x);
	free(x);
}
