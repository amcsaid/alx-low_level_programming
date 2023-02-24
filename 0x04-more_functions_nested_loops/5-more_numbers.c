#include "main.h"

/**
 * more_numbers - check the code
 * Description: prints numbers skipping 2 and 4
 */

void more_numbers(void)
{
	int i, j, k;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
			_putchar('0' + i);
		for (k = 0; k < 3; k++)
		{
			_putchar('1');
			_putchar('0' + k);
		}

	}
	_putchar('\n');
}
