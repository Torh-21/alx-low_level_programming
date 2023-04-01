#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @word: input string
 *
 * Return: character
 */
char *string_toupper(char *word)
{
	int a;

	for (a = 0; word[a] != '\0'; a++)
	{
		if (word[a] >= 'a' && word[a] <= 'z')
		{
			word[a] = word[a] - 32;
		}
	}

	return (word);
}
