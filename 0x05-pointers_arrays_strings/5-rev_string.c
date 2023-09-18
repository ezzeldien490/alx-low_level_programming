#include "main.h"

/**
 * rev_string - reverses a string.
 *
 * @s: pointer.
*/

void rev_string(char *s)
{
	int a;
	int i = 0, r;
	char b[1000];

	for (a = 0; s[a] != '\0'; a++)
	{
		b[a] = s[a];
	}
	for (r = a - 1; r >= 0; r--)
	{
		s[r] = b[i];
		i++;
	}
}
