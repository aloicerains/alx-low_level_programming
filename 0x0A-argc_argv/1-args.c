/**
 * main - program entry point
 * @argc: argument counter
 * @argv: pointer to string array
 *
 * Description: Function prints the number of arguments passed
 * Return: 0 sucess, -1 failure
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int count;

	count = 0;
	for (; argv[count] != argv[argc]; count++)
		;
	printf("%d\n", count - 1);
	return (0);
}
