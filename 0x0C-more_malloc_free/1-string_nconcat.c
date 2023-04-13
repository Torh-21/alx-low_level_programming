#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: character argument
 * @s2: character argument
 * @n: integer argument
 *
 * Return: character
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n >= b)
		n = b;

	x = malloc(a + n + 1);

	if (x == NULL)
		return (NULL);

	for (c = 0; c < a; c++)
		x[c] = s1[c];

	for (d = 0; d < n; d++)
		x[c + d] = s2[d];

	x[c + d] = '\0';
	return (x);
}
