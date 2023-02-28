#include "main.h"
#include <stddef.h>

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

void puts_half(char *str)
{
	int length_of_the_string = _strlen(str);
	int n = (length_of_the_string - 1) / 2;

	_puts(str + (length_of_the_string - n - 1));

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
