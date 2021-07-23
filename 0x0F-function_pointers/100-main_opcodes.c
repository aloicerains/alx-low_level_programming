#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints opcodes of function
 * @argc: Argument counter
 * @argv: Argument vector from command line
 *
 * Return: 0 for success.
 */
int main(int argc, char *argv[])
{
	int nobytes, i;
	int (*prog)(int, char **) = &main;

	if (argc == 2)
	{
		nobytes = atoi(argv[1]);
		if (nobytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		for (i = 0; i < nobytes; i++)
			printf("%02x%c",
					(unsigned char) *((char *) prog + i), i < nobytes - 1 ? ' ' : '\n');
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
	return (0);
}
