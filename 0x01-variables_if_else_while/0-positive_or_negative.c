#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * program assigns random number to the variable if succesful return 0
 * Return : Always 0 (Succesful)
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		print("%d is positive\n", n);
	else if (n == 0)
		print("%d is zero\n", n);
	else
		print("%d is nagative\n", n);
	return (0);
}
