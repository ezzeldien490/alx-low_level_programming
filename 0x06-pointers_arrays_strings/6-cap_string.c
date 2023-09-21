#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: array.
 *
 * Return: s.
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] -= 32;
			}
			else if (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1]
				 == '.' || s[i - 1] == '!' || s[i - 1] == '"'
				 || s[i - 1] == ')' || s[i - 1] == '(' ||
				 s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1]
				 == '\n' || s[i - 1] == 32 || s[i - 1] == '\t')

				s[i] -= 32;
		}
	}
	return (s);
}
