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

	n = 48;
	m = 48;

	while (n <= 57)
	{
		while (m <= 57)
		{
			putchar(n);
			putchar(m);
			if (n != 57 && m != 57)
			{
				putchar(44);
				putchar(32);
			}
			m++;
		}
		m = 48;
		n++;

	}
	putchar(10);
	return (0);
}
