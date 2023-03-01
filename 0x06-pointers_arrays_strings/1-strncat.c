#include "main.h"

/**
 * _strcat - check the code
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
			for (j = 0; j <= n; j++)
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
