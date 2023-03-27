#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of the string
 * @str: string input
 * Return: nothing (void)
 */
void puts_half(char *str)
{
	int l;
	int thr;
	int a;

	l = strlen(str);
	if (l % 2 != 0)
	{
		thr = (l / 2) + 1;
	}
	else
	{
		thr = l / 2;
	}
	for (a = thr; a < l; a++)
	{
		_putchar(*(str + a));
	}
	_putchar('\n');
}
