#include "dog.h"
#include <stdio.h>
/**
 * init_dog - it initialize a variable of type struct dog
 * @d: pointer
 * @name: char
 * @age: float
 * @owner: char
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
