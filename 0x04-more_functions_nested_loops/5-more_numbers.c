/**
 * more_numbers - prints numbers 0-14
 *@j: integer argument
 *
 * Description: Function prints x14
 * Return: void
 */
#include "holberton.h"
void put(int j);
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				put(j);
			}
			else
			{
				_putchar((j / 10) + 48);
				put(j);
			}
		}
		_putchar('\n');
	}
}
/**
 * put - prints integer character
 * @j: integer argument
 *
 * Description: prints modulus of character
 * Return: void
 */
void put(int j)
{
	_putchar((j % 10) + 48);
}



