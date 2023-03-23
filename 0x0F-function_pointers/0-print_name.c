#include <stddef.h>

/**
 * print_name - calls a function to print a name
 * @name: name to be printed
 * @f: function pointer to the printing function
 *
 * This function takes a string `name` and a function pointer `f` as arguments,
 * and calls the function `f` with `name` as its argument.
 *
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
