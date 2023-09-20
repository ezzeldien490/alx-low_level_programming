#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: first array.
 *
 * @src: second array.
 *
 * @n: integer.
 *
 * Return: dest.
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, c, l;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (c = 0; src[c] != '\0'; c++)
	{
	}

	l = c;
	c = 0;
	while  (c < l && c < n)
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	return (dest);
}
