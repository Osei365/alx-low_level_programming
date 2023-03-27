#include "main.h"
#include <string.h>
/**
 * print_rev - prints reverse of string
 * @s: string to be reversed
 * Return: nothing (void)
 */
void print_rev(char *s)
{
	int l;
	int a;

	l = strlen(s);
	for (a = l - 1; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}

