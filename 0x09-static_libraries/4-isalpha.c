#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check the alpha letters.
 *
 * @c: the letter  will check
 *
 * Return: 1 if alphe and 0 if else
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
