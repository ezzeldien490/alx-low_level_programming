#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase character.
 *
 * @c: character will be checked.
 *
 * Return: 1 if uppercase characer and 0 if else.
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
