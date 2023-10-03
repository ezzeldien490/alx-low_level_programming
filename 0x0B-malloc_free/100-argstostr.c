#include "main.h"
#include <stdlib.h>

/**
 * strtow - concatenates all the arguments of your program.
 *
 * @ac: size of array av.
 * @av: array.
 *
 * Return: av.
 */

char *argstostr(int ac, char **av)
{
	char *d;
	int i, j, g = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; g++, j++)
		{}
		g++;
	}
	g++;
	d = malloc(g * sizeof(char));

	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0, g = 0; i < ac; i++, g++)
	{
		for (j = 0; av[i][j] != '\0'; j++, g++)
		{
			d[g] = av[i][j];
		}
		d[g] = '\n';
	}
			return (d);
}
