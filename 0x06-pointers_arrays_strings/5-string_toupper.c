#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @s: array.
 *
 * Return: *s.
*/
char *string_toupper(char *s)
{

	for (; *s != '\0'; s++)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}
	}
	return (s);
}
