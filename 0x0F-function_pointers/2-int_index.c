#include "function_pointers.h"
/**
 * int_indec - searches for an integer
 *
 * @array: integer array argument
 * @size: integer size argument
 * @cmp: function pointer argument
 *
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]) != 0)
		{
			return (x);
		}
	}

	return (-1);
}
