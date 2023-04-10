#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 Success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	int n;

	n = argc - 1;

	printf("%d\n", n);

	return (0);
}
