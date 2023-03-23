#include <ctype.h>
/**
 * _isdigit - checks for a digit(0 to 9)
 *
 * @c: number to be evaluated
 *
 * Return: 1 if it is a digit else
 * return 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
