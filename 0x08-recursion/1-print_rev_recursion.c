#include "main.h"
#include <stddef.h>

/**
 * _print_rev_recursion - check the code
 * @s: char pointer as an input
 * Description: Pointers manipulation
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(s[0]);
	}
	if(s[0] == '\n')
		_putchar('\n');
}
