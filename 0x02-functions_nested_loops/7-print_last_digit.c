/**
 * print_last_digit - prints last digit of number
 * @c: number argument being determined
 *
 * Description: Function determines positive last digit of a number
 * Return: last digit of number
 */
#include "holberton.h"
int print_last_digit(int c)
{
	long int ret;
	int mod;

	if (c < 0)
	{
		ret = (-1) * c;
	       mod =  ret % 10;
	       _putchar('0' + mod);
	}
	else if (c == 0)
	{
		ret = 0;
		mod = 0;
		_putchar('0' + mod);
	}
	else
	{
		ret = c;
		mod = ret % 10;
		_putchar('0' + mod);
	}
	return (mod);

}
