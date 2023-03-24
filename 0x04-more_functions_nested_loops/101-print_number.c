#include "main.h"
/**
 * print_number - prints out an integer
 * @n: the integer to be preinted
 * Return: always 0 (Success)
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
