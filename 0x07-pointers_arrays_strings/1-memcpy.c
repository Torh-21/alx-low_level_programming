#include "main.h"
/**
 * _memcpy - The function copies memory area
 *
 * @dest: memory destination for pasting
 * @src: memory destination to copy
 * @n: number of bytes to copy
 *
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
