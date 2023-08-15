#include <stdio.h>
/**
 * main - Entry point
 * Return: Everytime 0 (Successful)
 */
int  main(void)
{
	int x;

	for (x = 0 ; x <= 9 ; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
