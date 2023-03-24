#include "main.h"
/**
 * print_number - prints out an integer
 * @n: the integer to be preinted
 * Return: always 0 (Success)
 */
void print_number(int n)
{
	int count = 0;
	int num = n * 1;
	int i;
	int t, mod, a;

	while (num != 0)
	{
		count++;
		num = num / 10;
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n == 0)
	_putchar('0');
	for (i = count; i > 0; i--)
	{
		t = 1;
		a = i * 1;
		while (a > 1)
		{
			t = t * 10;
			a--;
		}
		mod = n / t;
		_putchar((mod % 10) + '0');
	}
}
