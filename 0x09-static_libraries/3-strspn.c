#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: first string.
 * @accept: second string.
 *
 * Return:  number of bytes in the initial segment.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, r;
	int d = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (r = 0; accept[r] != '\0'; r++)
		{
			if (s[i] == accept[r])
			{
				d++;
			}
			if (s[i] == ' ')
				return (d);
		}
	}
	return (d);
}
