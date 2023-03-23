#include "main.h"
/**
 * print_line - draws a straight line
 * @n: length of line
 */
void print_line(int n)
{
	int st;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (st = 0; st < n; st++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
