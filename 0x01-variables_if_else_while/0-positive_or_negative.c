#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* 
 * main - start of program
 * Description: Randow number is positive or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		puts("is positive");
	if else (n == 0)
		puts("is zero");
	else
		puts("is negative");
	return (0);
}


