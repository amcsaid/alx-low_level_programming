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
	int n, m;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		for (m = 48; m < 58; m++)
		{
			putchar(m);
		}
		putchar(44);

	}
	putchar(10);
	return (0);
}
