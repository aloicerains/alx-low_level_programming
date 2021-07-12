/**
 * main - program entry point
 * @argc: argument counter
 * @argv: pointer to string array
 *
 * Description: Function prints the result of adding numerous integers
 * Return: 0 sucess, 1 failure
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int result, i;

	result = 0;
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] != '0')
		{
			if (atoi(argv[i]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		if (atoi(argv[i]) < 0)
			continue;
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
