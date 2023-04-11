#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int x, y, total;
	char *a;

	total = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			for (a = argv[x]; *a != '\0'; a++)
			{
				if (!isdigit(*a))
				{
					printf("Error\n");
					return (1);
				}
			}

			y = atoi(argv[x]);

			if (y > 0)
			{
				total += y;
			}
		}
		printf("%d\n", total);
	}

	return (0);
}
