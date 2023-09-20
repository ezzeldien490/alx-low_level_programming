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
	char *p = dest;

	for (; *p != '\0'; p++)
	{
	}
	for (; *src <= *(src + (n - 1)) ; src++)
	{
		*p = *src;
		p++;
	}
	*p = '\0';
	return (dest);
}
