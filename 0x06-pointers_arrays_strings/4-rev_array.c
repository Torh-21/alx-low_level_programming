#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: pointer array
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int value;

	for (i = 0; i < n / 2; i++)
	{
		value = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = value;
	}
}
