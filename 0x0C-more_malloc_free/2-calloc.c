#include "main.h"

/**
 * _calloc - A function that allocates memory for an array, using calloc
 * @nmemb: The number os array members
 * @size: The array size
 * Return: The pointer to the new allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
