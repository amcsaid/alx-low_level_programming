#include "main.h"

/**
 * print_rev - check the code
 * @s: char pointer as an input
 * Description: Pointers manipulation
 */

void rev_string(char *s)
{
	int i, lenght = _strlen(s);
	char *last = s + lenght - 1;
	char *swap = s;

	if (lenght != 0)
	{
		for (i = 0; i < length ; i++)
		{
			*s = swap[length - i];
		}
	}
	_putchar('\n');
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
