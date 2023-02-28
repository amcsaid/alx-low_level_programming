#include "main.h"

/**
 * print_rev - check the code
 * @s: char pointer as an input
 * Description: Pointers manipulation
 */

void rev_string(char *s)
{
	int i, lenght = _strlen(s);
	char swap = s;

	if (lenght != 0)
	{
		for (i = 0; i < lenght ; i++)
		{
			*s = swap[lenght - i];
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
