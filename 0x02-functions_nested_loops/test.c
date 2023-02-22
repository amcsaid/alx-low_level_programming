#include<stdio.h>

void main(void)
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
