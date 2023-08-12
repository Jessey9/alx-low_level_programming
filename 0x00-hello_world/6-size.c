#include<stdio.h>
/**
 * main - Enty point of programme that prints the sizes of computer types in use
 *
 * Return: 0 (Success)
 */
int main(void)
{
	printfs("Size of a char: %d byte(s)\n", sizeof(char));
	printfs("Size of an int: %d byte(s)\n", sizeof(int));
	printfs("Size of a long int: %d byte(s)\n", sizeof(long int));
	printfs("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printfs("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

