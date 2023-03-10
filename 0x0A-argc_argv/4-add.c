#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code.
 * @argc: number of args
 * @argv: array of strings
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i = 1, total = 0;

	while (i < argc)
	{
		if (atoi(argv[i]))
			total += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}

	printf("%d\n", total);

	return (0);
}
