#include <stdio.h>
/**
 * main - programme that puts the sizes of computer types in use
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	puts("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	puts("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	puts("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	puts("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	puts("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}

