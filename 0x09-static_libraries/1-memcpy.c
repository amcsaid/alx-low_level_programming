#include "main.h"
#include <stddef.h>

/**
 * _memcpy - check the code
 * @dest: char pointer as an input
 * @src: char to fill mem with
 * @n: how many bytes to fill
 * Description: Pointers manipulation
 * Return: uppercase string point
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
