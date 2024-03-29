#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: integer argument
 * @index: index argument
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
	{
		return (-1);
	}

	*n = (1 << index) | *n;

	return (1);
}

