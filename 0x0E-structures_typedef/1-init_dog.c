#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Pointer to the name to set
 * @age: Age to set
 * @owner: Pointer to the owner's name to set
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
