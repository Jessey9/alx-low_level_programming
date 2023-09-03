#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it
 * @argc: Arguments count
 * @argv: Arugments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
