/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: A pointer to the first string.
 * @s2: A pointer to the second string.
 * @n: The number of bytes to concatenate from s2.
 *
 * Return: A pointer to the concatenated string, or NULL if malloc fails.
 *         The returned string is s1 followed by the first n bytes of s2,
 *         followed by a null terminator.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat_str;
    unsigned int s1_len = 0, s2_len = 0;

    /* If s1 is NULL, treat it as an empty string */
    if (s1 == NULL)
        s1 = "";

    /* If s2 is NULL, treat it as an empty string */
    if (s2 == NULL)
        s2 = "";

    /* Get the length of s1 and s2 */
    s1_len = strlen(s1);
    s2_len = strlen(s2);

    /* If n is greater than or equal to s2_len, use the entire string s2 */
    if (n >= s2_len)
        n = s2_len;

    /* Allocate memory for the concatenated string */
    concat_str = malloc(s1_len + n + 1);
    if (concat_str == NULL)
        return (NULL);

    /* Copy s1 and the first n bytes of s2 into concat_str */
    memcpy(concat_str, s1, s1_len);
    memcpy(concat_str + s1_len, s2, n);

    /* Add a null terminator to the end of the concatenated string */
    concat_str[s1_len + n] = '\0';

    /* Return a pointer to the concatenated string */
    return (concat_str);
}
