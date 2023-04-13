#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: integer argument
 * @size: integer argument
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;
	char *y;
	unsigned int z;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);

	if (x == NULL)
		return (NULL);

	y = (char *)x;

	for (z = 0; z < (nmemb * size); z++)
		y[z] = 0;

	return (x);
}
