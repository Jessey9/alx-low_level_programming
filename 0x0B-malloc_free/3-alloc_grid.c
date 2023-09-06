#include "main.h"

/**
 * alloc_grid - A function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: Grid width
 * @height: Grid height
 * Return: The pointer which points to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int i, x, y, z;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (x = i; x >= 0; x--)
				free(a[x]);
			free(a);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			a[y][z] = 0;
	}
	return (a);
}
