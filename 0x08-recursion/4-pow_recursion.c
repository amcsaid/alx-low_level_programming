#include "main.h"
#include <stddef.h>
/**
 * _pow_recursion - check the code
 * @x: int intput
 * @y: int input
 * Description: Pointers manipulation
 * Return: factorial of a number
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (_pow_recursion(x, y - 1));
	}
	else if (y == 0)
		return (1);
}
