/**
 * wildcmp - function compares if strings are identical
 * @s1 : string 1 argument
 * @s2 : string 2 argument
 *
 * Return: 1 if identical, 0 if not
 */
#include "holberton.h"
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return ((wildcmp(s1 + 1, s2)) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
