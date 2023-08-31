#include "main.h"
#include <stdio.h>

/**
 * sqrt_n - Gives the natural square root of a number
 * @c: Iterator
 * @n: Input number
 * Return: Square root or -1
 */

int sqrt_n(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c * c > n)
	{
		return (-1);
	}
	return (sqrt_n(n, c + 1));
}
/**
 * _sqrt_recursion - Function that returns the natural square root
 * of a number
 * @n: The input number
 * Return: Natural square root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_n(n, 0));
}
