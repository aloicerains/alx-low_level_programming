/**
 *print_number - Prints any integer o screen
 *@n: interger argument
 *
 * Description: Function takes any number and prints out
 * Return: void
 */
#include "holberton.h"
void print_number(int n)
{
	unsigned int c;

	c = n;
	if (n < 0)
	{
		_putchar('-');
		c = -n;
	}
	if (c / 10)
		print_number(c / 10);
	_putchar('0' + (c % 10));

}
