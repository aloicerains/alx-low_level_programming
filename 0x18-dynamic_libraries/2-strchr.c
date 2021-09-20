/**
 * _strchr- locates a character string
 * @s: pointer to the string argument
 * @c: character being searched
 *
 * Description: Function returns pointer to first occurence of c
 * in string or null
 * Return: Pointer to s or NULL
 */
#include <stdio.h>
#include "main.h"
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
	return (NULL);
}
