#include <stdio.h>
int _putchar(char);

void times_table(void)
{
	int x, y, z;
	for (int i = 0; i < 10; i++)
	{
		for (int j =0; j < 10 ; j++)
		{
			putchar(' ');
			x = i * j;
			y = x / 10;
			z = x % 10;
			if (x >= 10)
				putchar('0' + y);
			else
				putchar(' ');
			putchar('0' + z);
			if (j != 9)
				putchar(',');
		}
		putchar('\n');
	}
}
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
	n = n%10;
	n = _abs(n);
	_putchar('0' + n);
	return (n);
}
void jack_bauer(void)
{
	char a, b, c, d;
	for (a = '0';a <= '2'; a++)
	{
		for (b = '0';b <= '9'; b++)
		{
			for (c = '0';c < '6'; c++)
			{
				for (d = '0';d <= '9'; d++)
				{
					if ((a >= '2') && (b >= '4'))
						break;
					putchar(a);
					putchar(b);
					putchar(':');
					putchar(c);
					putchar(d);
					putchar('\n');
				}
			}
		}
	}
}
int add(int n, int m)
{
	return (n+m);
}
