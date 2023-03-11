#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code.
 * @argc: number of args
 * @argv: array of strings
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i = 0, c = 0, rest;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (1);
	}

	rest = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		c = c + rest / coins[i];
		rest = rest - ((rest / coins[i]) * coins[i]);
	}
	printf("%d\n", c);
	return (0);
}
