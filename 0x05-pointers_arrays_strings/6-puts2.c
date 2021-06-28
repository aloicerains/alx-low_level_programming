/**
 * puts2 - Function prints other characters
 * @str: string argument
 *
 * Description: Function skips one character and prints the next
 * Return: void
 */
#include "holberton.h"
#include "2-strlen.c"
void puts2(char *str)
{
	int len;
	int i;

	len = _strlen(str);
	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
