/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>
int main(void)
{
	int ch = 0;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar(ch % 10 + '0');
	}
	putchar('\n');
	return (0);
}

