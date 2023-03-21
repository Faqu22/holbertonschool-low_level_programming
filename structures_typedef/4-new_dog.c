#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - create a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: return this new dog.
 *
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = malloc(sizeof(struct dog));
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
	return (my_dog);
}
