#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: integer argument
 *
 * Return: integer
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b * sizeof(unsigned int));

	if (x == NULL)
	{
		exit(98);
	}

	return (x);
}
