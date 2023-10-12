#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - print char.
 *
 * @ap: va list.
*/

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * print_integer - print integer.
 *
 * @ap: va list.
*/

void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * print_float - print flout type variable.
 *
 * @ap: va list.
*/

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * print_string - print string.
 *
 * @ap: va list.
*/

void print_string(va_list ap)
{
	char *j;

	j = va_arg(ap, char*);

	if (j == NULL)
	{
		printf("(nil)");
	}
	printf("%s", j);
}

/**
 * print_all - ptints anything.
 *
 * @format: is a list of types of argument passedt to the funciont.
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j;

	print_form_t print_anytype[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (*print_anytype[j].c == format[i])
			{
				print_anytype[j].f(ap);

				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);


}
