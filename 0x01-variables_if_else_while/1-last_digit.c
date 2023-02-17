#include <stdio.h>
#include <time.h>
/**
 * main - start of program
 * Description: Randow number is positive or negative
 * Return: always returns 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int m = n % 10;

	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	return (0);
}
