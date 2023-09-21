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
		if (i == 0)
		{
			s[i] -= 32;
		}
		if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || s[i] == '.' || s[i] == ','
				|| s[i] == ';' || s[i] == '!' || s[i] == '?' || s[i] == '"'
				|| s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			++i;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
