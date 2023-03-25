#include "main.h"
/**
 * print_triangle - prints a triangle
 *
 * @size: input integer
 *
 * Return void
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= (size - a); b++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
