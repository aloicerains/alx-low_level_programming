/**
 * _isdigit - checks whether argument is digit
 * @c: character argument being checked
 *
 * Description: Function takes a character converts to integer
 * and check for limits between 0-9
 * Return: 1 if within limits and 0 otherwise
 */
#include "main.h"
int _isdigit(int c)
{
	int i;
	int ret;
	int k = c - '0';

	for (i = 0; i <= 9; i++)
	{
		if (i == k)
		{
			ret = 1;
			break;
		}
		else
		{
			ret = 0;
		}
	}
	return (ret);
}



