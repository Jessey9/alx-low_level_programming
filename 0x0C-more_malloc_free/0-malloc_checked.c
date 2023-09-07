#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory
 * Return: the pointer to the new memory allocated
*/

void *malloc_checked(unsigned int b)
{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
