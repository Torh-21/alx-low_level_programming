#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 *
 * @s: character substring
 * @accept: character argument
 *
 * Return: Unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, s_len, accept_len;

	for (s_len = 0; s[s_len] != '\0'; s_len++)
	{
	}

	for (accept_len = 0; accept[accept_len] != '\0'; accept_len++)
	{
	}

	for (a = 0; a < s_len; a++)
	{
		for (b = 0; b < accept_len; b++)
		{
			if (s[a] == accept[b])
			{
				break;
			}
		}
		if (b == accept_len)
		{
			return (a);
		}
	}

	return (s_len);
}
