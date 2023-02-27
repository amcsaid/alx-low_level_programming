#include "main.h"
#include <stddef.h>

/**
 * _strlen - check the code
 * @s: chqr pointer input
 * Description: Pointers manipulation
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	return count;
}
