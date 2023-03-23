#include "main.h"
/**
 * print_diagonal - prints diagonal to screen
 * @n: number of diagonal
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			b = 0;
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
