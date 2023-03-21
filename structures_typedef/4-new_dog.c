#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - create a new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 * Return: return this new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	unsigned int cont;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = malloc(strlen(name) + 1);
	if (my_dog->name == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(strlen(owner) + 1);
	if (my_dog->owner == NULL)
	{
		free(my_dog->owner);
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	for (cont = 0; cont < strlen(name); cont++)
	{
		my_dog->name[cont] = name[cont];
	}
	for (cont = 0; cont < strlen(owner); cont++)
	{
		my_dog->owner[cont] = owner[cont];
	}
	my_dog->age = age;
	return (my_dog);
}
