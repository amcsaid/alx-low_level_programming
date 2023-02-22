void times_table(void)
{
	int x, y, z;
	for (int i = 0; i < 10; i++)
	{
		for (int j ='0'; j < 10 ; j++)
		{
			putchar(' ');
			x = i * j;
			y = x / 10;
			z = x % 10;
			putchar('0' + y);
			putchar('0' + z);
			putchar(',';)

		}
		putchar('\n');
	}
}
