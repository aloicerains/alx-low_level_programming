/**
 *_pow_recursion  - function returns x pow y
 * @x: number argument
 * @y: power argument
 *
 * Return: integer x pow y
 */
#include "holberton.h"
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, (y - 1)));
}
