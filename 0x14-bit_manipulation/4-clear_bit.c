#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: integer argument
 * @index: index argument
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}

	*n = (*n & (~(1 << index)));

	return (1);
}

