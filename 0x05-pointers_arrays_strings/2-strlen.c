#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: character pointer
 *
 * Return: integer leng
 */
int _strlen(char *s)
{
	int leng = 0;

	while (*s != '\0')
	{
		leng++;
		s++;
	}

	return (leng);
}
