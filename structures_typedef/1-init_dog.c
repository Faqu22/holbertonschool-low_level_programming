#include "dog.h"
#include "stdio.h"

/**
 * init_dog- Params for dog.
 * @d: Name of var of struct.
 * @name: pointer of name of dog.
 * @age: pointer of age of dog.
 * @owner: owner of dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;

}
