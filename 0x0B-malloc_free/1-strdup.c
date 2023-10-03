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
	int i;


	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{}

		d = malloc(sizeof(*str) * i);

		if (d == NULL)
		{
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
		{
			d[i] = str[i];
		}
		return (d);
}
