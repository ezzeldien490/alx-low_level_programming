#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: d.
*/

int *array_range(int min, int max)
{
	int *d, i;

	if (min > max)
		return (NULL);

	d =malloc(sizeof(int) * (max - min + 1));

	if (d == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
	{
		d[i] = min;
	}
	return (d);

}
