#include "main.h"

/**
 * reverse_array - check the code
 * @a: int pointer as an input
 * @n: number of elements
 * Description: Pointers manipulation
 */

void reverse_array(int *a, int n)
{
	int i, len = n;

	for (i = 0; i < len / 2; i++)
	{
		int temp = a[i];

		a[i] = a[len - i - 1];
		a[len - i - 1] = temp;
	}
}
