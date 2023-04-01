#include "main.h"
/**
 * print_number - Prints an integer
 *
 * @n: input integer
 *
 * Returns an integer
 */
void print_number(int n)
{
	int a, b;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	b = 1;
	while (b <= n / 10)
	{
		b = b * 10;
	}

	while (b > 0)
	{
		a = n / b;
		_putchar('0' + a);
		n = n - (a * b);
		b = b / 10;
	}
}
