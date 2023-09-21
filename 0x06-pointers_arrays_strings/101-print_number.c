#include "main.h"

/**
 * print_number -  prints an integer.
 *
 * @n: number.
*/

void print_number(int n)
{
	unsigned int b = n;

	if (n < 0)
	{
		_putchar('-');
		b = -b;
	}

	if (b > 9)
		print_number(b / 10);

	_putchar((b % 10) + '0');
}
