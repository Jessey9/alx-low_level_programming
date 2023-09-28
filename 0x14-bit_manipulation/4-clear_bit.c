#include "main.h"

/**
 * clear_bit -  A function that sets the value of a bit to 0
 * at a given index
 * @n: Pointer to the number to change
 * @index: Index of the bit to clea
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
