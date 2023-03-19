#include <unistd.h>

/**
 * main - Program start
 * Description: Print datatype sizes
 * Return: always returns 0
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	while (*s)
	{
		write(2, s, 1);
		s++;
	}
	return (1);
}


