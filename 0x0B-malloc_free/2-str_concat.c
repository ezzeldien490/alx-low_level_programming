#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: d.
*/

char *str_concat(char *s1, char *s2)
{
	char *d;
	unsigned int i, j;

	for (i = 0; s1[i] != 0; i++)
	{}
	i++;
	for (j = 0; s2[j]; j++)
	{}

	j += i;

	d = malloc(sizeof(*s1) * j);

	if (d == NULL)
		return (NULL);
	i = 0;
	for (; s1[i] != 0; i++)
	{
		d[i] = s1[i];
	}
	j = 0;
	for (; s2[j] != 0; j++, i++)
	{
		d[i] = s2[j];
	}
	return (d);

}
