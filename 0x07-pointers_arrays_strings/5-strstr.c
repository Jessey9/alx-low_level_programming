#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: Input
 * @needle: Input
 * Return: Everytime 0 (Successful)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}

	return (0);
}
