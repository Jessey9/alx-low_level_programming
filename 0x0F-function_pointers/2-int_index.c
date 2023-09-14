#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - A function that searches for an integer
 * @array: The array to search
 * @size: The size of array
 * @cmp : The function pointer
 * Return: If no element matches, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
