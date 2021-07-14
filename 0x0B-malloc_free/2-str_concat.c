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
	int len1 = 0;
	int len2 = 0;
	int len;
	
	while (s1 && *s1++)
		len1++;
	while (s2 && *s2++)
		len2++;
	len = len1 + len2;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result += len;
	*result = '\0';
	for (s2--; len2--;)
		*--result = *--s2;
	for(s1--; len1--;)
		*--result = *--s1;
	return (result);
}
