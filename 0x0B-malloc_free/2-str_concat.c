#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - check the code
 * @s1: pinter to string
 * @s2: pointer to string
 * Description: Malloc usage
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int size;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	size = strlen(s1) + 1;

	if (size == 0)
		return (NULL);

	ar = strdup(s1);
	ar = ar + size;
	ar = strdup(s2);
	ar = ar - size;
	return (ar);
}
