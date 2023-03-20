#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: the dog to be initialized
 * @name: the name of the dog
 * @age: the gae of the dog
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
