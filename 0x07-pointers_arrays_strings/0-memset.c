#include "main.h"
#include <stddef.h>

/**
 * _memset - check the code
 * @s: char pointer as an input
 * @b: char to fill mem with
 * @n: how many bytes to fill
 * Description: Pointers manipulation
 * Return: uppercase string point
 */
char *_memset(char *s, char b, unsigned int n)
{
	nt i = 0;

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
