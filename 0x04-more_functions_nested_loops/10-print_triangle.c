#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			b = 0;
			while (b < (size - a))
			{
				_putchar(' ');
				b++;
			}
			c = 0;
			while (c < a)
			{
				_putchar('#');
				c++;
			}
			_putchar('\n');
		}
	}
}
