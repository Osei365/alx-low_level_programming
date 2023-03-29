#include "main.h"
#include <string.h>
/**
 * string_toupper - converts lowercase to uppercase
 * @s: string to be converted
 * Return: char *
 */
char *string_toupper(char *s)
{
	int c;
	int l, a;

	l = strlen(s);
	for (a = 0; a < l; a++)
	{
		c = *(s + a);
		if (c >= 97 && c <= 122)
		{
			c = c - 32;
		}
		*(s + a) = c;
	}
	return (s);
}
