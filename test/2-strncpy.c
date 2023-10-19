#include "main.h"

/**
 * _strncpy - copies a string.
 *
 * @dest: first array.
 *
 * @src: second srray.
 *
 * @n: integer.
 *
 * Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a, b;

	for (b = 0; src[b] != 0; b++)
	{}

	if (b < n)
	{
		for (a = 0; a < b; a++)
		{
			dest[a] = src[a];
		}
		for (; a < n; a++)
		{
			dest[a] = '\0';
		}
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			dest[a] = src[a];
		}
	}
	return (dest);
}
