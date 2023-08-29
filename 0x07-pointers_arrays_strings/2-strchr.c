#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: String used
 * @c: input character
 * Return: Eveytime 0 (Successful)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}

