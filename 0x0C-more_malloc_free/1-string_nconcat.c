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
	char *str, *strncat;
	unsigned int i, j, size;

	str = "";
	if (s1 == NULL)
		s1 = str;
	if (s2 == NULL)
		s2 = str;
	for (i = 0; s1[i] != '\0'; i++)
	{}
	i++;
	strncat = malloc(sizeof(char) * (i + n));
	size = i + n - 1;

	if (strncat == NULL)
		return (NULL);

	for (i = 0; i < size && s1[i] != '\0'; i++)
	{
		strncat[i] = s1[i];
	}

	for (j = 0; i < size && s2[j] != '\0'; i++, j++)
	{
		strncat[i] = s2[j];
	}
	strncat[i] = '\0';
	return (strncat);
}
