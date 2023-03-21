#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints dates of dog.
 * @d: dates of pointer of dog.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	(d->name != NULL) ? printf("Name: %s\n", d->name) : printf("Name: (nil)\n");
	(d->age != 0) ? printf("Age: %f\n", d->age) : printf("Age: 0.000000\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
