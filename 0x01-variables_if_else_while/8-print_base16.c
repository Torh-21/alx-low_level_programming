#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
	{
		putchar('0' + number);
	}

	for (letter = 'a'; letter < 'g'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}

