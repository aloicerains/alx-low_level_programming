/**
 * main - program entry
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: always 0
 */
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	int answer, n1, n2;
	char *op;
	int (*fu)(int, int);

	op = argv[2];
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	fu = get_op_func(op);
	answer = fu(n1, n2);
	if ((*op == '/' && n2 == 0) || (*op == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", answer);
	return (0);
}

