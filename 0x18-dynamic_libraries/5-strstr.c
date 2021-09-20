/**
 * _strstr- Function finds first occurence of a substring
 * * @haystack: string pointer to search from
 * @needle: string pointer being searched
 *
 * Return: character pointer
 */
#include "main.h"
#include <stdio.h>
#include <string.h>
char *_strstr(char *haystack, char *needle)
{
	const char *a;
	const char *b;

	b = needle;
	if (*b == 0)
	{
		return ((char *)haystack);
	}
	for (; *haystack != 0; haystack += 1)
	{
		if (*haystack != *b)
			continue;
		a = haystack;
		while (1)
		{
			if (*b == 0)
				return ((char *)haystack);
			if (*a++ != *b++)
				break;
		}
		b = needle;
	}
	return (NULL);
}
