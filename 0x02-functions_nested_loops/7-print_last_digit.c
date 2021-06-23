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
	int ret = c % 10;

	if (ret < 0)
	{
		ret = ret * (-1);
	}
	else
	{
		ret = c;
	}
	return (ret);
}
