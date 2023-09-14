#include "main.h"

/**
 * rint_number -  prints an integer.
 *
 * @n: number for print.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');  
		n = -n;         
	}

	if (n < 10)
	{
		_putchar(n + '0');  
	}
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + '0');
	}

}
