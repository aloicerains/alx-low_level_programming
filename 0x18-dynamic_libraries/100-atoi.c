/**
 * _atoi - prints character
 * @s: character argument
 *
 * Return: integer
 */
#include "main.h"
int _atoi(char *s)
{
	int res, i;

	res = 0;
	for (i = 0; s[i] != '\0'; ++i)
		res = res * 10 + s[i] - '0';
	return (res);
}
