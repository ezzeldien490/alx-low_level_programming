#include "main.h"

/**
 * _strchr -  locates a character in a string.
 *
 * @s: array.
 * @c: character.
 *
 * Return: pointer to the first occurrence of the character c, or NULL if else.
*/

char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}
		return ('\0');
}
