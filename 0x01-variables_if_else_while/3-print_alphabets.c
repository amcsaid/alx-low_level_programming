#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - start of program
 * Description: ALX Tasks
 * Return: always returns 0
 */
int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 113 || n != 101)
			putchar(n);
	}
	putchar(10);
	return (0);
}
