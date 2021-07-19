/**
 * free_dog - frees dog from memory
 * @d: dog pointer
 *
 * Return: void
 */
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
