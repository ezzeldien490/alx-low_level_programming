#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: 0
*/

void times_table(void)
{
	int n, d, X;

	for (n = 0; n < 10; n++)
	{
		_putchar(48);

		for (d = 1; d < 10; d++)
		{
			_putchar(',');
			_putchar(' ');

			X = n * d;

			if (X <= 9)
			{
				_putchar(' ');
				_putchar(X + '0');
			}

			else
			{
				_putchar((X / 10) + '0');
				_putchar((X % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
