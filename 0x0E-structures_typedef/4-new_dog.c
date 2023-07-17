#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: who owns the dog
 *
 * Return: NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*allocate a memory of the new dog*/
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);
	/*Allocate a memory for the owner and name strings*/
	newDog->name = (char *)malloc(sizeof(name) + 1);
	newDog->owner = (char *)malloc(sizeof(owner) + 1);
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		/*memory allocation failed free previously allocated memory and return NULL*/
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
	}
	/*copy the name and owner strings*/
	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);
	newDog->age = age;/*assign age*/
	return (newDog);
}
