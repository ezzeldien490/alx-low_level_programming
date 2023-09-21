#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 *  @s: array.
 *
 *  Return: s.
*/

char *rot13(char *s)
{
	int i, b;
	char *d = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *c = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (b = 0; d[b] != '\0'; b++)
		{
			if (s[i] == d[b])
			{
				s[i] = c[b];
			}
		}
	}
	return (s);
}
