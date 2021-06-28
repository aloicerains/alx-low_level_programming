/**
 * print_rev - Function prints in reverse
 * @s: string argument
 *
 * Description: Function obtains a string and prints in the reverse
 * Return: void
 */
#include "holberton.h"
#include "2-strlen.c"
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s + 0);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
