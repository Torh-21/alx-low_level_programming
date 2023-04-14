#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integerrs
 *
 * @min: integer argument
 * @max: integer argument
 *
 * Return: integer
 */
int *array_range(int min, int max)
{
	int *x;
	int a, b;

	if (min > max)
		return (NULL);

	a = (max - min) + 1;

	x = malloc(a * sizeof(int));

	if (x == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
		x[b] = min + b;

	return (x);
}
