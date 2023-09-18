#include "main.h"

/**
 * print_rev - reverses a string.
 *
 * @s: pointer.
*/

void print_rev(char *s)
{
	int i = 0, a;

	for (a = 0; s[a] != '\0'; a++)
	{
		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
