/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>
int main(void)
{
	char ch;
	char cr;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar (ch);
	}
	for (cr = 'A'; cr <= 'Z'; cr++)
	{
		putchar(cr);
	}
	printf("\n");
	return (0);
}

