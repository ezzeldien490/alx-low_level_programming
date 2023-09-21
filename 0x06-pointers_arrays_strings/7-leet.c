#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: array.
 *
 * Return: s.
*/

char *leet(char *s)
{
	int i, j;
	char *c = "aAeEoOtTlL";
	char *d = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = d[j];
			}
		}
	}
	return (s);
}
