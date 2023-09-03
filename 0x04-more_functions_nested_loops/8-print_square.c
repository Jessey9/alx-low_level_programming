#include "main.h"

/**
 * print_square - Prints a squares according parameter
 * @size: The size of the squares
 * Return: empty
 */

void print_square(int size)

{
        int x, y, z;

        if (size <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (x = 0; x < size; x++)
                {
                        for (z = 0; z <= x; z++)
                        {
                                _putchar(35);
                        }
                        _putchar('\n');
                }
        }
}
