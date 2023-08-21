#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: input character c
 *
 * Return: 1 for a letter, 0 for otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
