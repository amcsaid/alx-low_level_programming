#include "main.h"
#include <stddef.h>

/**
 * string_toupper - check the code
 * @strs: char pointer as an input
 * Description: Pointers manipulation
 * Return: uppercase string point
 */
char *string_toupper(char *strs)
{
	int i = 0;

	while (*strs != '\0')
	{
		if (*strs >= 'a' && *strs <= 'z')
			*strs = *strs - 32;
		strs++;
		i++;
	}
	strs = strs - i;

	return (strs);
}
