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
	int n, m, k;

	n = '0';
	m = '0';
	k = '0';

	while (n <= '9')
	{
		m = n + 1;
		while (m <= '9')
		{
			k = m + 1;
			while(k <= '9')
			{
				putchar(n);
				putchar(m);
				putchar(k);
				if ((n != '7') || (m != '8') || (k != '9'))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			k = '0';
			m++;
		}
		m = '0';
		n++;

	}
	putchar(10);
	return (0);
}
