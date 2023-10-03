#include "main.h"
#include <stdlib.h>

/**
 * create_array -  creates an array of chars, and initializes it with char.
 *
 * @size: size of array.
 * @c: character.
 *
 * Return: d.
 */

char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size > 0)
	{
		d = malloc(sizeof(c) * size);

		if (d == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < size; i++)
		{
			d[i] = c;
		}

		return (d);
	}
	return (NULL);
}
