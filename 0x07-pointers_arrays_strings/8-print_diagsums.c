#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sums of the two diagnols of a matrix
 * @a: The matrix
 * @size: The length of the arrays
 */

void print_diagsums(int *a, int size)
{
	int i, r;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i * size + i];
	}
	printf("%d, ", sum);

	sum = 0;
	r = size - 1;
	for (i = 0; i < size ; i++, r--)
	{
		sum += a[i * size + r];
	}
	printf("%d, \n", sum);
}
