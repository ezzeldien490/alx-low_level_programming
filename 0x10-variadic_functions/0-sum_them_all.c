#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 *
 * @n: count of arguments.
 *
 * Return: total or 0.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i; 
	int total = 0;

	if (n == 0)
		return (0);

	va_start(ap, n);

		for (i = 0; i < n; i++)
		{
			total += va_arg(ap, int);
		}
	va_end(ap);
	return (total);
}
