/**
 * _calloc - Allocates memory for an array of elements and sets it to zero.
 *
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element in bytes.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
 *         or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;

    /* Check if nmemb or size is 0 */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* Allocate memory for the array */
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);

    /* Set the memory to zero */
    memset(ptr, 0, nmemb * size);

    /* Return a pointer to the allocated memory */
    return (ptr);
}
