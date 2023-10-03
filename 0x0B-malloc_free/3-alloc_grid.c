#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of array.
 * @height: height of array.
 *
 * Return: d.
*/

int **alloc_grid(int width, int height)
{
	int **d;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	d = malloc(height * sizeof(int));

	if (d == NULL)
	{
		free(d);
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		d[i] = malloc(width * sizeof(int));

		if (d[i] == NULL)
		{
			i--;
			for (; i >= 0; i--)
			{
				free(d[i]);
			}
			free(d);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			d[i][j] = 0;
	}
	return (d);
}
