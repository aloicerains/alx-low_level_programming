/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>
int main(void)
{
	char cr = 'a';
	int ch = 0x0;

	for (ch = 0x0; ch <= 0xf; ch++)
	{
		if (ch <= 0x9)
		{
			putchar(ch % 10 + '0');
		}
		continue;
	}
	for (cr = 'a'; cr <= 'f'; cr++)
	{
		putchar(cr);
	}
	putchar('\n');
	return (0);
}

