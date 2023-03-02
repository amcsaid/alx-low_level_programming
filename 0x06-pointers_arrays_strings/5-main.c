#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;
	
    printf("Call funciton with str and save to *ptr \n");
    ptr = string_toupper(str);
    printf("Content of the pointer ptr: %s \n", ptr);
    printf("Contrnt of the string str: %s \n", str);
    return (0);
}
