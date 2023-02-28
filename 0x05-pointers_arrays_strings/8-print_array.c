#include "main.h"
#include <stdio.h>

/**
 * print_array - check the code
 * @a: array pointer
 * @n: number of elements to print
 * Description: Pointers manipulation
 */

void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
		printf("%d ,", a[i]);
	printf("\n");
}
