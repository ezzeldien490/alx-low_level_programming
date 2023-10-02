#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  adds positive numbers.
 * @argc: Number of arguments
 * @argv: Array of arguments recieved
 *
 * Return: 0 on success, 1 if not given two arguments
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	int c;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (c = 1; c < argc; c++)
		{
			for (i = 0; argv[c][i] != '\0'; i++)
			{
				if (!(isdigit(argv[c][i]))) 
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[c]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
