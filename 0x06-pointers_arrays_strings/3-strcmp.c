#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: input character string
 * @s2: input character string
 *
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] == s2[i])
		{
			return (0);
		}
	}

	return (0);
}
