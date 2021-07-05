/**
 * print_chessboard - Function prints the chess board
 * @a: pointer to chess board
 *
 * Return: void
 */
#include "holberton.h"
#include <stdio.h>
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
