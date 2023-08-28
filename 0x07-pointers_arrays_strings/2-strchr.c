#include <stdio.h>
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @c: Character
 * @s: String
 * Return: NULL
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return (NULL);
}
