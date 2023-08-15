#include <stdio.h>
/**
 * main - Entry point
 * Return: Everytime 0 (Successful)
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		if (x != 'q' && x != 'e')
			putchar(x);
	putchar('\n');
	return (0);
}

