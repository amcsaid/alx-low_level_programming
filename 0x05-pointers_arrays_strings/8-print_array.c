#include "main.h"
#include <stdio.h>

/**
 * puts_half - check the code
 * @str: char pointer as an input
 * Description: Pointers manipulation
 */

void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
