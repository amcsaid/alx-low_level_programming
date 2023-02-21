#include <stdio.h>

int _putchar(char);

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
int _isupper(int c)
{
        if ( (c > 64) && (c < 91) )
        {
                return (1);
        }
        else
                return (0);
}
int _isalpha(int c)
{
	if ( (_islower(c) == 1) || (_isupper(c) == 1) )
		return (1);
	else
		return (0);
}
int print_sign(int n)
{
	if ( c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}