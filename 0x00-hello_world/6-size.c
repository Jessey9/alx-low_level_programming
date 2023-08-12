#include <stdio.h>
/**
 * main - programme that puts the sizes of computer types in use
 * Return: 0
 */
int main(void)
{
	puts("Size of a char: %d byte(s)\n", sizeof(char));
	puts("Size of an int: %d byte(s)\n", sizeof(int));
	puts("Size of a long int: %d byte(s)\n", (unsigned long) sizeof(long int));
	puts("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	puts("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

