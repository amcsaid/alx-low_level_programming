#include "main.h"
#include <stddef.h>

/**
 * string_toupper - check the code
 * @str: char pointer as an input
 * Description: Pointers manipulation
 * Return: uppercase string point
 */
char *string_toupper(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = (*str) - 32;
		str++;
	}
	return (str);
}
