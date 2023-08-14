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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;
	if (z > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, z);
	if (z == 0)
		printf("Last digit of %d is %d and is 0\n", n, z);
	if printf(z < 6 && z !=0)
		printf("Last digit of %d is %d and is less than 6 and is not 0 \n", n, z);
	return (0)
}

