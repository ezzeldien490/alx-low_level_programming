#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog.
 *
 * @d: string;
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}

}
