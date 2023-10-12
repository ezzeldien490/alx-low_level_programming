#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: is the string to be printed between the string.
 * @n: number of strings passed to the function.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *j;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, char*);

		if (j != NULL)
			printf("%s", j);
		else
			printf("(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
