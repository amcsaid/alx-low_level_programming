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

	n = '0';
	m = '0';

	while (n <= '9')
	{
		m = n + 1;
		while (m <= '9')
		{
			putchar(n);
			putchar(m);
			if ( (n != '8') && (m != '9'))
			{
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		m = '0';
		n++;

	}
	putchar(10);
	return (0);
}
