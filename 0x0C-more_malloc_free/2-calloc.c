#include "main.h"
#include <stdlib.h>

/**
 * _memset - set the specific character to all string.
 *
 * @l: string.
 * @d: specific character.
 * @n: number of index.
 *
 * Return: k.
*/


char *_memset(char *l, int d, int n)
{
	char *k = l;
	int i;

	for (i = 0; i < n; i++)
	{
		k[i] = d;
	}
	return (k);
}

/**
 * _calloc - Allocate memory for array of nmemb elements of size bytes
 * @nmemb: Number of elemnts
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *d;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	d = malloc(size * nmemb);
	if (d == NULL)
		return (NULL);

	_memset(d, 0, (size * nmemb));

	return (d);
}
