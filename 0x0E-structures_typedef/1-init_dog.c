#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialoze variable dog
 * @d: structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
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
