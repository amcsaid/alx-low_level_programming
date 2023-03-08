#include "main.h"
#include <stddef.h>

/**
 * _puts_recursion - check the code
 * @s: char pointer as an input
 * Description: Pointers manipulation
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
		_putchar('\n');
	else
		_putchar(s[0]);

	if (s[0] != '\0')
	{
		s++;
		_puts_recursion(s);
	}
}
