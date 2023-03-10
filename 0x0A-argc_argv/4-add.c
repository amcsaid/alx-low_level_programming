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
	int i = 1, total = 0, a, j;

	while (i < argc)
	{
		a = atoi(argv[i]);

		if (a)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			total += a;
		}
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
