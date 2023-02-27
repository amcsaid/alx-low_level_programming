#include "main.h"

/**
 * swap_int - check the code
 * @a: integer pointer input
 * @b: integer pointer input
 * Description: Pointers manipulation
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
