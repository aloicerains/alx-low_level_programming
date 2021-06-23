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
	int r = c % 10;
	int ret;

	if (r < 0)
	{
		ret = (r * (-1));
	}
	else if (r == 0)
	{
		ret = (r);
	}
	else
	{
		ret = (r);
	}
	return (ret);
}
