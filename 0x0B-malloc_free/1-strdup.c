/**
 * _strdup - returns pointer to newly allocated memory
 * @str: pointer to string
 *
 * Return: pointer to string duplicate
 */
#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
char *_strdup(char *str)
{
	char *array;
	char *ptr;
	int length;

	length = 0;
	while (str[length])
		length++;
	array = malloc(length + 1);
	ptr = array;
	while (*str)
		*ptr++ = *str++;
	*ptr = '\0';
	if (array)
	{
		return (array);
	}
	else
		return (NULL);
	free(array);
}
