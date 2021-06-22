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
	int ret = 0;

	for (r = 'a'; r <= 'z'; r++)
	{
		if (c == r)
		{
			ret = 1;
		}
	}
	return (ret);
}
