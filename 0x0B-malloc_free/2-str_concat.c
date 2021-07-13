/**
 * str_concat - returns pointer to newly concatenated string
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 *
 * Return: pointer to concatenated string
 */
#include <string.h>
#include "holberton.h"
#include <stdlib.h>
char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	result = malloc(strlen(s1) + strlen(s2) + 1);
	if (result)
	{
		strcpy(result, s1);
		strcat(result, s2);
		return (result);
	}
	else
		return (NULL);
}
