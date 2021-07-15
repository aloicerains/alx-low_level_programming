/**
 * string_nconcat - concatenates two strings
 * @s1 : destination string
 * @s2 : source string
 * @n : number of bytes of string 2
 * 
 * Return: pointer to new concatenated string
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string, *ptr;
	int len, i;

	len = strlen(s1) + n + 1;
	string = malloc(sizeof(*string * len));
	ptr = string;
	if (string == NULL)
		return (NULL);
	else
	{
		for (i = 0; s1[i]; i++)
			string[i] = s1[i];
		strncat(string, s2, n);
		return (ptr);
	}
}
