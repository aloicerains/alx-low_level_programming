/**
 * string_toupper - Function compares two strings
 * @a: string being converted
 *
 * Description: Function returns the uppercases
 * Return: void
 */
#include <stdio.h>
#include "holberton.h"
char *string_toupper(char *a)
{
	int i;

	i = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
