/**
 * print_sign - prints sign of a number
 * @n: integer being determined
 *
 * Description: Function determines sign of the argument and prints it
 * Return: 1 positive, 0 zero, and -1 for negative
 */
#include "holberton.h"
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		ret = 0;
	}
	else
	{
		_putchar('-');
		ret = -1;
	}
	return (ret);
}
