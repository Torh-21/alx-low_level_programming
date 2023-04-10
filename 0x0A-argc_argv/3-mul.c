#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);

		printf("%d\n", (x * y));
	}
	else
	{

		printf("Error\n");
	}

	return (0);
}

