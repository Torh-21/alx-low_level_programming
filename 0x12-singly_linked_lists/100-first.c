#include "lists.h"
/**
 * before_main - prints a message before the main function
 * is executed
 *
 * Return: void
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
