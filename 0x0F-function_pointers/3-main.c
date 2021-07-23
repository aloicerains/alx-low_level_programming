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

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = argv[2];
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	fu = get_op_func(op);
	if (fu == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((fu == op_div || fu == op_mod)  && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	answer = fu(n1, n2);
	printf("%d\n", answer);
	return (0);
}

