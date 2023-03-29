#include "main.h"
/**
 * print_number - prints integer
 * @n: integer to be printed
 * Return: nothing (void)
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	m = n;
	if (m > 9)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
