#include "main.h"
#include <stddef.h>

/**
 * _puts - check the code
 * @str: char pointer as an input
 * Description: Pointers manipulation
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
