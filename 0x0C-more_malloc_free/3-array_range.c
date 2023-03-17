#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array of elements and sets it to zero.
 *
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
 *         or if malloc fails.
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;

	if (min > max)
		return (NULL);

	size = max - min;

	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i ++)
		ptr[i] = min + i;

	return (ptr);
}
