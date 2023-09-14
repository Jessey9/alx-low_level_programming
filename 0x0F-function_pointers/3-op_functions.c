#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - The sum of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The sum total of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The difference of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The product of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - It simplifies two numbers
 * @a: The first number
 * @b: The second number
 * Return: The division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The modulus of two numbers
 * @a: The first number
 * @b: The second number
 * Return: The remainder of division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
