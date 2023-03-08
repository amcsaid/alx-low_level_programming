#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - check the code
 * @s: char pointer as an input
 * Description: Pointers manipulation
 */
void _puts_recursion(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	if (i > 0)
		_putchar('\n');
}
