#include <stdio.h>
/**
 * main - prints all possible, unique combinations of three digits
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = i + 1; k <= 57; k++)
			{
				if (j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56  k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
