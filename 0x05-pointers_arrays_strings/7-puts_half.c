/**
 * puts_half - Function prints half the string
 * @str: string argument
 *
 * Description: Function prints the second half of the string
 * Return: void
 */
#include "holberton.h"
#include "2-strlen.c"
void puts_half(char *str)
{
	int len;
	int i;
	int n;

	len = _strlen(str) - 1;
	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		for (i = n + 1; i <= len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		n = len / 2;
		for (i = n + 1; i <= len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}

}
