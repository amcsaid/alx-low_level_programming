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

	while (*accept !='\0')
	{
		while (*s != '\0')
		{
			if (s == accept)
				t++;
			s++;
			i++;
		}
		s = s - i;
		i = 0;
		accept++;
	}
	return (t);
}
