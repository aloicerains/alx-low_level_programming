/**
 * new_dog - function creates new dog
 * @name: pointer to dog name
 * @age: dog age
 * @owner: pointer to dog owner
 *
 * Return: pointer of a new dog
 */
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = NULL;

	newDog = malloc(sizeof(*newDog));
	if (newDog == NULL)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
