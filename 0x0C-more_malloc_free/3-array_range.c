#include "main.h"

/**
 * array_range - A function that creates an array of integers
 * @min: Minimum
 * @max: Maximum
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *x, i = 0;

	if (min > max)
		return (NULL);
	x = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (x == NULL)
		return (NULL);
	while (min <= max)
	{
		x[i] = min;
		i++;
		min++;
	}
	return (x);
}

