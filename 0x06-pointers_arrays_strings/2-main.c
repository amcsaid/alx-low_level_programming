#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';

    printf("The random 98 *: %s\n", s1);
	
    printf("We run the function with 98* and the first (5 characters) string save to ptr pointer \n ");
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);

	
    printf(" The content of the 98* string: \n ");
    printf("%s\n", s1);
    printf(" The content of the ptr string: \n ");
    printf("%s\n", ptr);

	
    printf("We run the function with 98* and the first (5 characters) string save to ptr pointer \n ");
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf(" The content of the 98* string: \n ");
    printf("%s\n", s1);
    printf(" The content of the ptr string: \n ");
    printf("%s\n", ptr);
    return (0);
}
