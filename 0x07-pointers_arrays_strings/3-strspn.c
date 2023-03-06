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
	}
	return (t);
}
