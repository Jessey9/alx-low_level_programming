#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that sets the value of a pointer to a char
 * @a: Input
 * @size: Input
 * Return: Everytime 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, c;

	sum1 = 0;
	sum2 = 0;

	for (c = 0; c < size; c++)
	{
		sum1 = sum1 + a[c * size + c];
	}

	for (c = size - 1; c >= 0; c--)
	{
		sum2 += a[c * size + (size - c - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
