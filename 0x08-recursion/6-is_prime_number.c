#include "main.h"
#include <stddef.h>

/**
 * is_prime_number - check the code
 * @n: int input
 * Description: Recursion manipulation
 * Return: is prime or not
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (0 + is_prime_number_help(n, 2));
	return (0);
}

/**
 * is_prime_number_help - check the code
 * @n: int input
 * @i: increments
 * Description: Recursion manipulation
 * Return: is prime or not
 */
int is_prime_number_help(unsigned int n, unsigned int i)
{
	if (n % i == 0)
	{
		if (n == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + is_prime_number_help(n, i + 1));
}

