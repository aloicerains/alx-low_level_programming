/**
 * rev_string - Function reverses string argument
 * @s: string argument
 *
 * Description: Function obtains a string and reverses
 * Return: void
 */
#include "holberton.h"
#include "2-strlen.c"
void rev_string(char *s)
{
	int len;
	int i;
	int j;
	int c;

	len = _strlen(s);
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
