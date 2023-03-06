#include "main.h"
#include <stddef.h>

/**
 *  _strspn - check the code
 * @s: pointer to string to search
 * @accept: char to search for
 * Description: Pointers manipulation
 * Return: uppercase string point
 */
unsigned int _strspn(char *s, char *accept)
{
	char *ss = s, c;


	while (*s)
	{
		for (c = accept; *c; c++)
		{
			if (*s == *c)
				break;
		}
		if (*c == '\0)
			break;
		s++;
	}

	return (s - ss);
}
