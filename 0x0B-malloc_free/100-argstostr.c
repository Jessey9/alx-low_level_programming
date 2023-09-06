#include "main.h"

/**
 * argstostr - function which concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: NULL if ac == 0 or av == NULL or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int ch = 0, i = 0, x = 0, y = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][x])
		{
			ch++;
			x++;
		}
		x = 0;
		i++;
	}
	s = malloc((sizeof(char) * ch) + ac + 1);
	i = 0;
	while (av[i])
	{
		while (av[i][x])
		{
			s[y] = av[i][x];
			y++;
			x++;
		}
		s[y] = '\n';
		x = 00;
		y++;
		i++;
	}
	y++;
	s[y] = '\0';
	return (s);
}
