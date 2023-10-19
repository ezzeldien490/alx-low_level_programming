#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: first string.
 *
 * @s2: second string.
 *
 * Return: 0 if equal.
 */

int _strcmp(char *s1, char *s2)
{
	int a, b, i;

	for (a = 0; s1[a] != '\0'; a++)
	{}
	for (b = 0; s2[b] != '\0'; b++)
	{}
	for (i = 0; (s1[i] != '\0' && s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	if (a > b)
	{
		return (s1[b]);
	}
	else if (b < a)
	{
		return (s2[a] * -1);
	}

	return (0);
}
