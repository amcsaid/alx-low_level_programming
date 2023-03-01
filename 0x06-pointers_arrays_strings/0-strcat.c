#include "main.h"

/**
 * _strcat - check the code
 * @dest: char pointer as an input
 * @char: char pointer as an input
 * Description: Pointers manipulation
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
