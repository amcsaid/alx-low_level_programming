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
	if ( n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if ( n == 0 )
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
int _abs(int n)
{
	if ( n >= 0 )
		return (n);
	else
		return (-n);
}
int print_last_digit(int n)
{
	return (n%10);
}
void jack_bauer(void)
{
	char a, b, c, d = '0';
	for (a = '0';a < '2'; a++)
	{
		putchar(a);
		for (b = '0';b < '4'; b++)
		{
			putchar(b);
			putchar(':');
			for (c = '0';c < '6'; c++)
			{
				putchar(c);
				for (d = '0';d <= '9'; d++)
				{
					putchar(d);
					putchar('\n');
				}
			}
		}
	}
}
