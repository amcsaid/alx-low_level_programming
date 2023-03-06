#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - check the code
 * @s: pointer to string to search
 * @accept: char to search for
 * Description: Pointers manipulation
 * Return: uppercase string point
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (accept[i] != '\0')
	{
		while (*s != '\0')
		{
			if (s[j] == accept[i])
				return (s + j);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
