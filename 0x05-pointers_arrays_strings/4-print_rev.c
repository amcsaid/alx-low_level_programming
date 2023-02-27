#include "main.h"

/**
 * print_rev - check the code
 * @s: char pointer as an input
 * Description: Pointers manipulation
 */

void print_rev(char *s)
{
	int lenght = _strlen(s);
	char *last = s + lenght;


	while (last != (s - 1))
	{
		_putchar(*last);
		last--;
	}
	_putchar('\n');
}

/**
 * _strlen - check the code
 * @s: char pointer as an input
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

	return (count);
}
