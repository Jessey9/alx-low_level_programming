#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int o;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	o = n % 10;
	if (o > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, o);
	}
	else if (o < 6 && o != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and is not 0\n", n, o);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, o);
	}
	return (0);
}