/**
 * main -Entry point
 * prints various sizes
 *
 * Return: Always 0 (success)
 */
#include<stdio.h>

int main(void)
{
	int intType;
	float floatType;
	long int longInt;
	long long int llInt;
	char charType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longInt));
	printf("Size of long long int: %zu byte(s)\n", sizeof(llInt));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}

