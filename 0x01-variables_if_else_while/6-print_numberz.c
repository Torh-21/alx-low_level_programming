#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 * Using only putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d", i);
	}
	
	putchar("\n");

	return (0);
}
