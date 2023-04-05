#include "main.h"
/**
 * _pow_recursion - calculates the exponential of
 * an integer
 * @x: the integer to by raised by a power
 * @y: the power
 * Return: the empowered integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y >= 1)
	return (x * _pow_recursion(x, y - 1));
	else
	return (1);
}
