#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: first string.
 * @accept: second string.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, r;
	char *d;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (r = 0; accept[r] != '\0'; r++)
		{
			if (s[i] == accept[r])
			{
				d = &s[i];
				return (d);
			}
		}
	}
	return ('\0');
}
