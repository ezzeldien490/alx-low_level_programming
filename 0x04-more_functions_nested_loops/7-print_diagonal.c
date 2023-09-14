#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: is the number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	int d;
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			for (d = 1; d <= c; d++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');

		}
	}
}
