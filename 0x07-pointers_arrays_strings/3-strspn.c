#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to e searched
 * @accept: The prefix to be measured
 * Return: Number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[inex]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
}
