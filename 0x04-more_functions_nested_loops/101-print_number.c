#include "main.h"
/**
 * print_number - prints out an integer
 * @n: the integer to be preinted
 * Return: always 0 (Success)
 */
void print_number(int n)
{
	unsigned int m;
	
	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	if (m > 9)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
