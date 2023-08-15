#include <stdio.h>
/**
 * main - Entry point
 * Return: Everytime 0 (Successful)
 */
int main(void)
{
	int x;
	char y;

	for (x = 0 ; x <= 9 ; x++)
		putchar(x + '0');
	for (y = 'A' ; y <= 'F' ; y++)
		putchar(y);
	putchar('\n');
	return (0);
}

