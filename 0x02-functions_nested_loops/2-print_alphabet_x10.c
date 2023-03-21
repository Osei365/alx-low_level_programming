#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * Return: always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n = 10;
	int na;

	for (n = 0; n < 10; n++)
	{
		for (na = 97; na < 123; na++)
		{
			_putchar(na);
		}
		_putchar('\n');
	}
}
