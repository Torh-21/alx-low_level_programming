#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: character argument
 * @n: integer count argument
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list inputs;
	char *y;

	va_start(inputs, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(inputs, char *);

		if (y == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", y);
		}

		if (separator != NULL && x < (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(inputs);
}
