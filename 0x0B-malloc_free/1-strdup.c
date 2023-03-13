#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - check the code
 * @str: pinter to string
 * Description: Malloc usage
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *ar;
	int size;

	if (size == 0 || str == NULL)
		return (NULL);

	size = strlen(str) + 1;
	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	memcpy(ar, str, size);

	return (ar);
}
