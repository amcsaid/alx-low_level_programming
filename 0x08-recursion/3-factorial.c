#include "main.h"
#include <stddef.h>

/**
 * factorial - check the code
 * @n: char pointer as an input
 * Description: Pointers manipulation
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n-1));
	}
	else if (n == 0)
		return (1);
	else
		return (-1);
}
