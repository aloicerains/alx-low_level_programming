/**
 * _strdup - returns pointer to newly allocated memory
 * @str: pointer to string
 *
 * Return: pointer to string duplicate
 */
#include <string.h>
#include "holberton.h"
#include <stdlib.h>
char *_strdup(char *str)
{
	char *array;
	unsigned int length;

	if (str == NULL)
		return (NULL);
	length = strlen(str) + 1;
	array = malloc(length);
	if (array)
	{
		memcpy(array, str, length);
		return (array);
	}
	else
		return (NULL);
	free(array);
}
