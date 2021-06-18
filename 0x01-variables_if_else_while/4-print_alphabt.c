/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
#include <stdio.h>
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar (ch);
	}
	printf("\n");
	return (0);
}

