#include "main.h"
/**
 * main - prints the alphabet, followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
