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
	int t = 0, i = 0, j = 0;

	while (accept[i] != '\0')
	{
		while (s[j] != '\0')
		{
			if (s[j] == accept[i])
				t++;
			j++;
		}
		j = 0;
		i++;
		if (s[i] == ' ')
			break;
	}
	return (t);
}
