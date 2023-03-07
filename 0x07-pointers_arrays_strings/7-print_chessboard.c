#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_chessboard - check the code
 * @a: pointer to print the board
 * Description: Pointers manipulation
 * Return: uppercase string point
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
		}
		printf("\n");
	}
}
