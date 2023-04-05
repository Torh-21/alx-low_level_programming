#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix of integers
 *
 * @a: integer argument
 * @size: integer argument
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y, sum;

	sum = 0;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == y)
			{
				sum = sum + a[x][y];
			}
		}
	}
}
