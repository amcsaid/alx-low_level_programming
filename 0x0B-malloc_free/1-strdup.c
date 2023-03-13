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
	unsigned int i, size;

	size = strlen(str);

	if (size == 0 || str == NULL)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
		ar[i] = str[i];

	return (ar);
}
