#include "main.h"
#include <stdio.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string to copy
 * Return: the string copied
 */

char *_strdup(char *str)
{
	int x = 0, i = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);
	while (x < i)
	{
		s[x] = str[x];
		x++;
	}
	s[x] = '\0';
	return (s);
}
