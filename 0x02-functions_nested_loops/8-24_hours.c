/**
 * jack_bauer - Prints total number of minutes in a day
 *
 * Description: Function display all minutes within a day
 * Return: void
 */
#include "holberton.h"
void jack_bauer(void)
{
	int h;
	int min;

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((h / 10) + 48);
			_putchar((h % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');
		}
	}
}
