#include <stdio.h>
#include "_putchar.c"

void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		putchar(n);
	}
	putchar(10);
}

void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		print_alphabet();
	}
}
int _islower(int c)
{
	if ( (c > 96) && (c < 124) )
	{
		return (1);
	}
	else
		return (0);
}
