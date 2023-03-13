#include "main.h"
#include <stddef.h>

/**
 * create_array - check the code
 * @size: size of the array to create
 * @c: the char used to intialize it
 * Description: Malloc usage
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ar;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size ; i++)
		ar[i] = c;

	return (ar);
}
