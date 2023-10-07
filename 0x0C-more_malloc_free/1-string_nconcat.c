#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: string one.
 * @s2: string two.
 * @n: number of characters.
 *
 * Return: d.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *str2, *strncat;
	unsigned int i, j, c;

	str = str2 = "";
	if (s1 == NULL)
		s1 = str;
	if (s2 == NULL)
		s2 = str2;
	for (i = 0; s2[i] != '\0'; i++)
	{}
	i++;
	strncat = malloc(sizeof(char) * (i + n));
	if (strncat == NULL)
		return (NULL);
	c = i - 1;
	if (n >= c)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			strncat[i] = s1[i];
		}
		for (j = 0; s2[i] != '\0'; i++, j++)
		{
			strncat[i] = s2[j];
		}
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			strncat[i] = s1[i];
		}
		for (j = 0; j < n; i++, j++)
		{
			strncat[i] = s2[j];
		}
		strncat[i] = '\0';
	}
	return (strncat);
}
