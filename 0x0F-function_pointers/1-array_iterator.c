#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 *
 * @array: integer array argument
 * @size: size of array
 * @action: function pointer argument
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (x = 0; x < size; x++)
		action(array[x]);
}
