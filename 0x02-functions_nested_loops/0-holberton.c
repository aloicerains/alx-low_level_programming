/**
 * schoolName -Entry point
 * return - void
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
