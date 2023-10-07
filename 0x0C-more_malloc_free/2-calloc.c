#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  allocates memory for an array.
 *
 * @nmemb: array.
 * @size: number of bytes.
 *
 * Return: nmemb.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *d;

	if (nmemb == '0' || size == '0')
	{
		return (NULL);
	}

	d = malloc(nmemb * size);

	if (d == NULL)
	{
		return (NULL);
	}

	for (; i < nmemb; i++)
	{
		d[i] = '0';
	}
	return (d);
}