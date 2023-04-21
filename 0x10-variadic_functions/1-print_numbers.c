#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator: character argument
 * @n: integer count argument
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list inputs;

	va_start(inputs, n);

	for (x = 0; x < n; x++)
	{
		if (separator == NULL)
		{
			printf("%d\n", va_arg(inputs, unsigned int));
		}
		else
		{
			printf("%d", va_arg(inputs, unsigned int));
			if (x < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}

	printf("\n");
	va_end(inputs);
}
