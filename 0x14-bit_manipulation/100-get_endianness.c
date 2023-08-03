#include "main.h"
/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big endian or 1 for little endian
 */
int get_endianness(void)
{
	int x;
	char *a;

	x = 1;
	a = (char *) &x;

	return (*a == 1);
}

