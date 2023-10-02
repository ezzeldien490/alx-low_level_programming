#include <ctype.h>
#include "main.h"

/**
 * _islower - check the lowercase letters
 *
 * @c: letter to check case of
 * Return: 0
*/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
