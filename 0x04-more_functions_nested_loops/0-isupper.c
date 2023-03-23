#include <ctype.h>
#include "main.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: the character to be checked
 *
 * Return: returns 1 if uppercase else
 * returns 0
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
