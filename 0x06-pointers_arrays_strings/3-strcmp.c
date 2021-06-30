/**
 * _strcmp - Function compares two strings
 * @s1: string one
 * @s2: string two
 *
 * Description: Function compares s1 and s2
 * Return: (-) less, (0) equal, (+) more
 */
#include "holberton.h"
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);
}
