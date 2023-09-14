#include "main.h"

/**
 * print_square - prints a square.
 *
 * @size: is the size of the square.
*/

void print_square(int size)
{
	int n, d;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (d = 1; d <= size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
