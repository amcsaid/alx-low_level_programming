#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start of program
 * Description: Randow number is positive or negative
 * Return: always returns 0
 */
int main(void)
{
	int n;
	n = 48;
	while (n < 58)
	{
		putchar(n);
		putchar(44);
		putchar(32);
		n++;

	}
	putchar(10);
	return (0);
}
