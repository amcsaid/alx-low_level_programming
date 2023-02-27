#include "main.h"
#include <stddef.h>

/**
 * _puts - check the code
 * @s: char pointer as an input
 * Description: Pointers manipulation
 */

void _puts(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		_purchar(*str);
		str++;
	}
}
