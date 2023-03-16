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

char *str_concat(char *s1, char *s2) {
	int s2_len, s1_len;
	char *result;
    if (s1 == NULL) {
        s1 = "";
    }
    if (s2 == NULL) {
        s2 = "";
    }

    s1_len = strlen(s1);
    s2_len = strlen(s2);

    result = malloc((s1_len + s2_len + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    memcpy(result, s1, s1_len);
    memcpy(result + s1_len, s2, s2_len + 1);

    return result;
}
