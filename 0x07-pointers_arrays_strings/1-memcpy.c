#include "main.h"

/**
 * _memcpy -Copies memory area
 * @src: Output
 * @dest: Input
 * @n: Input
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
