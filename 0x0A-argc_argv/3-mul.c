/**
 * main - program entry point
 * @argc: argument counter
 * @argv: pointer to string array
 *
 * Description: Function prints the result of multiplying two integers
 * Return: 0 sucess, 1 failure
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	char *arg1, *arg2;
	int num1, num2, result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = argv[1];
	num1 = atoi(arg1);
	arg2 = argv[2];
	num2 = atoi(arg2);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
