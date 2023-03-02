#include "main.h"

/**
 * _strcmp - check the code
 * @s1: char pointer as an input
 * @s2: char pointer as an input
 * Description: Pointers manipulation
 * Return: 0 if equale, else if diff
 */

int _strcmp(char *s1, char *s2)
{
	char c1, c2;

	do {
		c1 = *s1++;
		c2 = *s2++;
		if (c1 == '\0')
			return (c1 - c2);
	} while (c1 == c2);

	return (c1 - c2);
}
