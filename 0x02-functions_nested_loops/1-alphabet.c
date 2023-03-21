#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: always 0 (Success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
