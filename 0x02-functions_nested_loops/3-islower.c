#include <ctype.h>
#include "main.h"
/**
 * _islower - prints 1 if char is lowercase
 *
 * @c: The character in ASCII code
 *
 * Return: always 0 (Success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
