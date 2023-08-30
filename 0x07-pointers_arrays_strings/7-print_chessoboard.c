#include "main.h"

/**
 * print_chessboard -A function that prints the chessboard
 * @a: Array
 * Return: Everytime 0 (Successful)
 */

void print_chessboard(char (*a)[8])
{
	int w;
	int b;

	for (w = 0; w < 8; w++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[w][b]);
		_putchar('\n');
	}
}
