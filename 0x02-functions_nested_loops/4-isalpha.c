#include <ctype.h>
#include "main.h"
/**
 * _isalpha - returns 1 if char is letter
 * lowercase, or uppercase
 *
 * @c: The character is in ASCII code
 *
 * Return: 1 for letter, lowercase, uppercase, 0 for rest
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
