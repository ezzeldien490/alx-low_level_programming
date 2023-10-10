#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 *
 * @name: name of new dog.
 * @age: age of new dog.
 * @owner: name of owner.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	
	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (d);
}
