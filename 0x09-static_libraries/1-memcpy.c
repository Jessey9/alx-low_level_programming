#include "main.h"

/**
 *_memcpy - Function that copies memory area
 *@dest: Memory where bytes is stored
 *@src: Memory where bytes is copied
 *@n: Number of bytes
 *
 *Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
