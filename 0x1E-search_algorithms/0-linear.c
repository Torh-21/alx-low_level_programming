#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array to be searched
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the index of the found value,
 * or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	i = 0;
	if (!array || size == 0)
		return (-1);

	while (i < size)
	{
		printf("Value at index[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
