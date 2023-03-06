#include "main.h"
#include <stddef.h>

/**
 * _strchr - check the code
 * @s: pointer to string to search
 * @c: char to search for
 * Description: Pointers manipulation
 * Return: uppercase string point
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
