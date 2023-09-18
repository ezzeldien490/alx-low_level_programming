#include "main.h"

/**
 * puts_half -  prints half of a string.
 *
 * @str: array.
*/

void puts_half(char *str)
{
	int i, a;

	for (i = 0; str[i] != '\0'; i++)
	{

	}
	a = (i - 1) / 2;
	for (a = a + 1; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
