#include "main.h"
/**
 * print_times_table - print n times tables
 *
 * @n: the number to be printed
 */
void print_times_table(int n)
{
	int a;
	int b;
	int c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				c = a * b;
				if (c < 100)
				{
					_putchar(' ');
				}
				if (c < 10)
				{
					_putchar(' ');
					_putchar(c + '0');
				}
				if (c >= 100)
				{
					_putchar((c / 100) + '0');
					_putchar(((c / 10) % 10) + '0');
					_putchar(((c % 100) % 10) + '0');
				}
				else if (c < 100 && c >= 10)
				{
					_putchar((c / 10) + '0');
					_putchar((c % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
