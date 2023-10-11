#include "function_pointers.h"

/**
 * print_name - pritns a name.
 *
 * @name: name of  the person.
 * @f: pointer to function.
*/

void print_name(char *name, void (*f)(char *))
{
	char *n = name;
	f(n);
}
