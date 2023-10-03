#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to a new string.
 *
 * @str: Memory for the new string is obtained with malloc.
 *
 * Return: d.
*/

char *_strdup(char *str)
{
	char *d;
	unsigned int i, l;


	if (str == NULL)
		return (NULL);

	for (l = 0; str[l] != '\0'; l++)
	{}

		d = malloc(sizeof(*str) * l);

		if (d == NULL)
		{
			return (NULL);
		}
		for (i = 0; i <= l; i++)
		{
			d[i] = str[i];
		}
		return (d);
}
