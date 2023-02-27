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


	while (last != s)
	{
		_putchar(*last);
		last--;
	}
	if (lenght != 0)
		_putchar(*last);
	_putchar('\n');
	_putchar('\0');	
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
