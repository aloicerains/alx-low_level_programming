/**
 * _islower - determines the lower alphabet
 * @c: character being determined
 *
 * Description: Function determines if argument in lowercase
 * Return: 1 success and 0 fail
 */
#include "holberton.h"
int _islower(int c)
{
	char r;
	int ret = 1;

	for (r = 'A'; r <= 'Z'; r++)
	{
		if (c == r)
		{
			ret = 0;
		}
	}
	return (ret);
}
