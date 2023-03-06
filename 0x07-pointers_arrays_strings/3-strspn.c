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
	char *c;
	int t = 0, i = 0;

	for (c = accept; *c; c++)
	{
		while (*s != '\0')
		{
			if (*s == c)
				t++;
			s++;
			i++;
		}
		s = s - i;
		i = 0;
	}
	return (t);
}
