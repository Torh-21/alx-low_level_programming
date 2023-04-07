#include "main.h"
/**
 * square_checker - checks if x is the perfect square of a
 *
 * @a: integer argument
 * @x: potential square
 *
 * Return: integer
 */
int square_checker(int a, int x)
{
	if ((x * x) == a)
	{
		return (x);
	}
	else if ((x * x) >= a)
	{
		return (-1);
	}

	return (square_checker(a, (x + 1)));
}

/**
 * _sqrt_recursion - returns the natural square root
 * of a anumber
 *
 * @n: integer argument
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}

	return (square_checker(n, 0));
}
