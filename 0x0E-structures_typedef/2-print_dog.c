#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog.
 *
 * @d: pointer.
*/

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("name: (nil)");
		}
		else
		{
			printf("name: %s\n", d->name);
		}

		printf("age: %f\n", d->age);

		if (d->owner == NULL)
		{
			printf("owner: (nil)");
		}
		else
		{
			printf("owner: %s\n", d->owner);
		}

	}
}
