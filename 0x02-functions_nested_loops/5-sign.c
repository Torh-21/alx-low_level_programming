#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: the input number
 *
 * Return: 1 if number is positive
 * 0 if number is zero
 * -1 if number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n > 0)
	{
		return (-1);
		_putchar(45);
	}
	else
	{
		return (0);
		_putchar(48);
	}
}
