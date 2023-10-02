#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: digit will be checked.
 *
 * Return: 1 if c is digit and 0 if else.
*/

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
