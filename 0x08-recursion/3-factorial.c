#include "main.h"
/**
 * factorial - returns the factorial of a given number
 *
 * @n: integer argumen
 *
 * Return: integer
 */
int factorial(int n)
{
	int total;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	total = n * factorial(n - 1);
	return (total);
}
