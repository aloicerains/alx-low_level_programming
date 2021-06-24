/**
 * fizzBuzz - Prints 1 to 100
 *
 * Description: Function prints words for multiples of 3 and 5 and both
 * Return: void
 */
#include <stdio.h>
void fizzBuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	fizzBuzz();
	return (0);
}



