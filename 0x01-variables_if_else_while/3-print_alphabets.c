#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 52; i++)
	{
		putchar(alphabet[i]);
	}
	putchar('\n');

	return (0);
}

