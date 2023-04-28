#include "lists.h"
/**
 * before_main - prints a message before the main function
 * is executed
 *
 * Return: void
 */
void __attribute__((constructor)) before_main()
{
	char *strA;
	char *strB;

	strA = "You're beat! and yet, you must allow,";
	strB = "I bore my house upon my back!";

	printf("%s\n%s\n", strA, strB);
}
