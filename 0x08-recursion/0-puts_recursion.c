#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 * @s: String to print
 * Return: new line
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
