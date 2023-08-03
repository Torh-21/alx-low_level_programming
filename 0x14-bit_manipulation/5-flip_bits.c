#include "main.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 *
 * @n: integer argument
 * @m: integer argument
 *
 * Return: integer
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitdiff;
	unsigned int bitcount;

	bitdiff = n ^ m;
	bitcount = 0;

	while (bitdiff != 0)
	{
		bitcount = bitcount + (bitdiff & 1);
		bitdiff >>= 1;
	}

	return (bitcount);
}

