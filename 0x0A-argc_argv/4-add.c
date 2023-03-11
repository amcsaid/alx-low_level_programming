#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code.
 * @argc: number of args
 * @argv: array of strings
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i = 1, total = 0, a;

	while (i < argc)
	{
		a = atoi(argv[i]);

		if (a)
			total += atoi(argv[i]);
		else
		{
			printf("Error\n");
			break;
		}
		i++;
	}

	printf("%d\n", total);

	return (0);
}
