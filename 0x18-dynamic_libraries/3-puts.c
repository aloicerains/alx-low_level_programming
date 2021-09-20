/**
 * _puts - Function prints output in stdout
 * @str: string argument
 *
 * Description: Function obtains a string and prints in stdout
 * Return: void
 */
#include "main.h"
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
