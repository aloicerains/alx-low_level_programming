/**
 * main -Entry point
 *
 * Description: print the name of school
 * Return: Always (0) success. non zero unsuccessful
 */
#include "holberton.h"
int main(void)
{
	char s[12] = "Holberton";
	int i = 0;

	while (i < 9)
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
