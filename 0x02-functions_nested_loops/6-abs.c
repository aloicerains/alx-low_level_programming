/**
 * _abs - determines the absolute value of number
 * @c: integer argument being determined
 *
 * Description: Function determines the absolute value of a number
 * Return: number in positive form
 */
#include "holberton.h"
int _abs(int c)
{
	int ret;

	if (c > 0)
	{
		return (c);
	}
	else if (c == 0)
	{
		return (c);
	}
	else
	{
		return (c * (-1));
	}
	return (ret);
}
