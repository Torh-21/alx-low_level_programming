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
	if (n >= 0 && n < 10)
	{
		_putchar('0' + n);
	}
	else if (n >= 10 && n < 100)
	{
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 100 && n < 1000)
	{
		_putchar('0' + (n / 100));
		_putchar('0' + ((n / 10) % 10));
		_putchar('0' + (n % 10));
	}
	else if (n >= 1000 && n < 10000)
	{
		_putchar('0' + (n / 1000));
		_putchar('0' + ((n / 100) % 10));
		_putchar('0' + ((n / 10) % 10));
	       _putchar('0' + (n % 10));
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar('0' + ((-n) / 10));
		_putchar('0' + ((-n) % 10));
	}
}
