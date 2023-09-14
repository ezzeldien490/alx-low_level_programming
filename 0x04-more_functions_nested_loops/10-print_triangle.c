#include "main.h"

/**
 * print_triangle -  prints a triangle.
 *
 * @size: is the size of the triangle.
*/

void print_triangle(int size)
{
	int n, d, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (d = size - 1; d >= n; d--)
			{
				_putchar(' ');

			}
			for (c = 1; c <= n; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
