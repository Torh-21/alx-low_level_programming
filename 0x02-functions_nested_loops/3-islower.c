#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: the input integer
 *
 * Return: 0 for otherwise or 1 for lowercase
 */
int _islower(int c)
{
	int d;

	d = islower(c);
	if (d > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
