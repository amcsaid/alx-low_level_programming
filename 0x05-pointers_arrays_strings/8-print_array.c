#include "main.h"
#include <stdio.h>

/**
 * _puts - check the code
 * @str: char pointer as an input
 * Description: Pointers manipulation
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
/**
 * puts_half - check the code
 * @str: char pointer as an input
 * Description: Pointers manipulation
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%f", a++);
	}
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
