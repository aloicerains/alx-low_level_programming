/**
 * _strpbrk - Function searches a string for a set of bytes
 * * @s: pointer to initial segment
 * @accept: pointer to source
 *
 * Return: character pointer
 */
#include <stdio.h>
#include "main.h"
#include <string.h>
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}
