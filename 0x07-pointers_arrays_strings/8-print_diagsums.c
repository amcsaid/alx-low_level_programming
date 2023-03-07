#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_chessboard - check the code
 * @a: pointer to print the board
 * Description: Pointers manipulation
 * Return: uppercase string point
 */
void print_diagsums(int *a, int size)
{
	int i = 0, x = 0, o = 0;

	for (i = 0; i < size; i++)
	{
		x = a[i][i];
	}
	for (i = size ; i > 0; i--)
        {
                o = a[i][i];
        }
	printf("%d, %d", x, o)
}
