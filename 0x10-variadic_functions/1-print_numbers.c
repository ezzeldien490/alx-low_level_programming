#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers followed ny a new line.
 *
 * @separator: is the string to be printed between numbers.
 * @n: numbers of integers passed to the function.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
