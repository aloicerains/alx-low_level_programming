/**
 * _isalpha - determines the lower alphabet
 * @c: character being determined
 *
 * Description: Function determines if argument in lowercase
 * Return: 1 success and 0 fail
 */
#include "main.h"
int _isalpha(int c)
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
	for (r = 'A'; r <= 'Z'; r++)
	{
		if (c == r)
		{
			ret = 1;
		}
	}
	return (ret);
}
