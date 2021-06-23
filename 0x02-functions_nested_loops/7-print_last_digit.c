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
	int ret;
	int mod;

	if (c < 0)
	{
		ret = (-1) * c;
	       mod = ret % 10;
	}
	else if (c == 0)
	{
		ret = 0;
		mod = 0;
	}
	else
	{
		ret = c;
		mod = ret % 10;
	}
	return (mod);

}
