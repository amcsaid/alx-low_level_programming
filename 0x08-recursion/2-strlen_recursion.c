#include "main.h"
#include <stddef.h>

/**
 * _strlen_recursion - check the code
 * @s: char pointer as an input
 * Description: Pointers manipulation
 * Return: int size of string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
		return (0);
}
