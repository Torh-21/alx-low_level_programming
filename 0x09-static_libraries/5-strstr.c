#include "main.h"
/**
 * _strstr - Locates a substring
 *
 * @haystack: character string argument
 * @needle: character string argument
 *
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
	}
	return ('\0');
}
