#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: pointer one.
 *
 * @b: pinter two.
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
