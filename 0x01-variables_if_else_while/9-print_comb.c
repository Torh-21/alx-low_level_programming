#include <stdio.h>
/**
 * main - prints all combinations of single digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(44);
		putchar(32);
	}

	putchar('\n');

	return (0);
}
