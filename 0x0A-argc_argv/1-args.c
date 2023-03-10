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
	if (argv[0] != "")
		printf("%d\n", argc);
	exit(EXIT_SUCCESS);
}
