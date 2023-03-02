#include "main.h"
#include <stddef.h>

/**
 * _strncpy - check the code
 * @dest: char pointer as an input
 * @src: char pointer as an input
 * @n: number of chars to copy
 * Description: Pointers manipulation
 * Return: pointer to result string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *swap = _strncat("", src, n);

	dest = _strcat(swap, dest);

	return (dest);
}
/**
 * _strlen - check the code
 * @s: char pointer as an input
 * Description: Pointers manipulation
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	return (count);
}
/**
 * _strncat - check the code
 * @dest: char pointer as an input
 * @src: char pointer as an input
 * @n: number of chars to copy
 * Description: Pointers manipulation
 * Return: pointer to result string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j, len = _strlen(src);

	while (1)
	{
		if (len == 0)
			break;
		if (dest[i] == '\0')
		{
			if (n > len)
				n = len;
			for (j = 0; j <= n - 1; j++)
			{
				dest[i] = src[j];
				i++;
			}
			break;
		}
		i++;
	}

	return (dest);
}

/**
 * _strcat - check the code
 * @dest: char pointer as an input
 * @src: char pointer as an input
 * Description: Pointers manipulation
 * Return: pointer to result string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j, len = _strlen(src);

	while (1)
	{
		if (len == 0)
			break;
		if (dest[i] == '\0')
		{
			for (j = 0; j <= len; j++)
			{
				dest[i] = src[j];
				i++;
			}
			break;
		}
		i++;
	}

	return (dest);
}
