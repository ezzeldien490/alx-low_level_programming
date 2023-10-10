#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy - Copy the given string
 * @dest: Location to copy string to
 * @src: String to copy to given location
 *
 * Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog.
 *
 * @name: name of new dog.
 * @age: age of new dog.
 * @owner: name of owner.
 *
 * Return: d.
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *new_name, *new_owner;
	int i;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
	{
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{}
	i++;

	new_name = malloc(sizeof(i));

	if (new_name == NULL)
	{
		free(d);
		return (NULL);
	}

	for (i = 0; owner[i] != '\0'; i++)
	{}
	i++;

	new_owner = malloc(sizeof(i));

	if (new_owner == NULL)
	{
		free(new_name);
		free(d);
		return (NULL);
	}

		_strcpy(new_name, name);
		_strcpy(new_owner, owner);

		d->name = new_name;
		d->age = age;
		d->owner = new_owner;

	return (d);
}
