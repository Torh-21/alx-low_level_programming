#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: count of parameters
 *
 * Return: integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum;
	va_list inputs;

	va_start(inputs, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (x = 0; x < n; x++)
		sum += va_arg(inputs, unsigned int);

	va_end(inputs);
	return (sum);
}
