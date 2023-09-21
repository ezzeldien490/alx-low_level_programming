#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers.
 *
 * @a: an array of integers.
 *
 * @n: the number of elements to swap.
*/

void reverse_array(int *a, int n)
{
	int i;
	int b[1000];

	for (i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	n--;

	for (i = 0; n >= 0; i++)
	{
		a[n] = b[i];
		n--;
	}
}
