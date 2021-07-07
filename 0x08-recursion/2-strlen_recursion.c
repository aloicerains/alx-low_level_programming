/**
 * _strlen_recursion - function returns string legth
 * @s: string pointer
 *
 * Return: integer string length
 */
#include "holberton.h"
int _strlen_recursion(char *s)
{
	int c;

	c = 0;
	if (*s == '\0')
	{
		return (c);
	}
	 c++;
	return (c + _strlen_recursion(s + 1));
}
