/**
 * main - program entry point
 * @argc: argument counter
 * @argv: pointer to string array
 *
 * Description: Function prints all the arguments passed followed by a line
 * Return: 0 sucess, -1 failure
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	for (; argv[count] != argv[argc]; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
