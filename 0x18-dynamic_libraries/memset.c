#include "main.h"
/**
 * _memset - Fills the memory with a constant byte
 *
 * @s: character memory
 * @b: constant byte
 * @n: number of bytes to fill
 *
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
