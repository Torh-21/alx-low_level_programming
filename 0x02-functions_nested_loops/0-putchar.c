#include "main.h"

/**
 * main - prints _putchar followed by a new line
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char i[8] = "_putchar";
	int j;

	for (j = 0; j < 8; j++)
	{
		_putchar(i[j]);
	}
	_putchar('\n');

	return (0);
}
