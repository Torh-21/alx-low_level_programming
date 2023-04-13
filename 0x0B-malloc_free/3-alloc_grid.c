#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2-D array of integers
 *
 * @width: integer argument
 * @height: integer argument
 *
 *
 * Return: integer array
 */
int **alloc_grid(int width, int height)
{
	int **x, a, b, c;

	if (width < 0 || width == 0 || height < 0 || height == 0)
		return (NULL);

	x = malloc(height * sizeof(int *));

	for (a = 0; a < height; a++)
		x[a] = malloc(width * sizeof(int));

	if (x == NULL)
		return (NULL);

	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			x[b][c] = 0;
		}
	}

	free (x);
	
	return (x);
}
