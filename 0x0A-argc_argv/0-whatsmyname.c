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
	if (argc > 0)
		printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
