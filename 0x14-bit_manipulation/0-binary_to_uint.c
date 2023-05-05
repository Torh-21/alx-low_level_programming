#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: string argument
 *
 * Return: integer, 0, or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int binLen, decimalRes, power;
	int i;

	binLen = 0;
	decimalRes = 0;
	power = 1;

	if (b == NULL)
		return (0);

	while (b[binLen] != '\0')
	{
		binLen++;
	}

	for (i = binLen - 1; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			decimalRes = decimalRes + (0 * power);
		}
		else if (b[i] == '1')
		{
			decimalRes = decimalRes + (1 * power);
		}
		else
		{
			return (0);
		}

		power = power * 2;
	}

	return (decimalRes);
}
