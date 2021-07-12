/**
 * main - program entry point
 * @argc: argument counter
 * @argv: pointer to string array
 *
 * Return: 0 sucess, -1 failure
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
