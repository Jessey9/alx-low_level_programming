#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Function that prints a name
 * @name: Name to print
 * @f: Function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
