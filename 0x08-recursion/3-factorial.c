/**
 * factorial - function returns factorial of a number
 * @n: number argument
 *
 * Return: integer factorial
 */
#include "holberton.h"
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
