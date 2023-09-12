#include "main.h"

/**
 * jack_bauer - prints every minute , starting from 00:00 to 23:59.
 *
 * Return: 0
*/

void jack_bauer(void)
{
	int n1 = 0, n2;

	while (n1 < 24)
	{
		n2 = 0;
		while (n2 < 60)
		{
			_putchar((n1 / 10) + '0');
			_putchar((n1 % 10) + '0');
			_putchar(':');
			_putchar((n2 / 10) + '0');
			_putchar((n2 % 10) + '0');
			_putchar('\n');

			n2++;
		}
		n1++;
	}
}
