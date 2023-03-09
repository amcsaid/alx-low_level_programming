#include "main.h"
#include <stddef.h>

/**
 * _sqrt_recursion - check the code
 * @n: int intput
 * Description: Pointers manipulation
 * Return: result of op on the number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (whatroot(n, 1));
}

/**
 * whatroot - check the code
 * @n: int intput
 * @i: increments
 * Description: help funtion
 * Return: result of op on the number
 */
int whatroot(int n, int i)
{
	if (n == i * i)
		return (i);
	else if (n > (i * i))
		return (whatroot(n, i + 1));
	else
		return (-1);
}
