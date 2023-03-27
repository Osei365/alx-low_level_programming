#include "main.h"
#include <string.h>
/**
  * puts2 - prints the even starting from the
  * first character
  * @str: input string
  * Return: nothing (void)
  */
void puts2(char *str)
{
	int l;
	int a;

	l = strlen(str);
	for (a = 0; a <= l - 1; a += 2)
	{
		_putchar(*(str + a));
	}
	_putchar('\n');
}
