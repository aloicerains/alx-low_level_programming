/**
 * create_array - creates and initializes array at runtime
 * @size: size of array to be created
 * @c: Character to be initialized
 *
 * Return: pointer to the array
 */
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	if (array == NULL)
		return (NULL);
	return (array);
}
