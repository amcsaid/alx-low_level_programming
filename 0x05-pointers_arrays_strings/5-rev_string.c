#include "main.h"

/**
 * print_rev - check the code
 * @s: char pointer as an input
 * Description: Pointers manipulation
 */

void rev_string(char *s)
{
	int len = strlen(s);
	for (int i = 0; i < len / 2; i++)
	{
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
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
