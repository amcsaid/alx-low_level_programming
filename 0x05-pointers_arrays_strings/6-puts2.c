#include "main.h"
#include <stddef.h>

/**
 * puts2 - check the code
 * @str: char pointer as an input
 * Description: Pointers manipulation
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
