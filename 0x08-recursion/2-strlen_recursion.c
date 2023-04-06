#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string argument
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int x;

	if (*s == '\0')
	{
		return (0);
	}

	x = 1 + _strlen_recursion(s + 1);

	return (x);
}
