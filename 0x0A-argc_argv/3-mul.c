#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: Argument count
 * @argv: Array of argument strings
 *
 * Return: 0 for succesful exit
 */
int main(int argc, char *argv[])
{
	    if (argc > 1)
	    {
		    printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	    }
	    else
	    {
		    printf("Error\n");
		    return (1);
	    }

	return (0);
}
