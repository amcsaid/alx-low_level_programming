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
	if (argc == 3)
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	} else
		printf("Error\n");
	return (0);
}
