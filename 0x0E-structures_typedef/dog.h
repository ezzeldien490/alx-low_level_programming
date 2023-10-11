#ifndef DOG_H
#define DOG_H


#include <stdlib.h>
/**
 * struct dog - print name, age , owner.
 *
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner
 *
 * Description: anythine.
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif
