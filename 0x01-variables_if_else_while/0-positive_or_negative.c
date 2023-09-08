#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 98;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	n = -98;

	if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	n = 0;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
