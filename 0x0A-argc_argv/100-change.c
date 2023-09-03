#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: Argument count
 * @argv:Argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int total, count;
	unsigned int x;
	char *z;
	int cents[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	total = strtol(argv[1], &z, 10);
	count = 0;
	if (!*z)
	{
		while (total > 1)
		{
			for (x = 0; x < sizeof(cents[x]); x++)
			{
				if (total >= cents[x])
				{
					count += total / cents[x];
					total = total % cents[x];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", count);
	return (0);
}
