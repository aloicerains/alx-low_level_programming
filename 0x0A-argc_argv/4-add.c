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
	int errorTest(char []);
	int result;
	int i;
	int flag;

	result = 0;
	for (i = 1; i < argc; i++)
	{
		flag = errorTest(argv[i]);
		if (flag == 0)
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
/**
 * errorTest - function checks if characters are in the argument
 * @s: string argument
 *
 * Return: flag 1 success, 0 fail
 */
int errorTest(char s[])
{
	int flag;
	int i;

	flag = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= '0' && s[i] <= '9'))
			flag = 0;
	}
	return (flag);
}
