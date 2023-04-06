#include "main.h"
int _pow(int x, int y);
/**
 * _sqrt_recursion - get the natural square of
 * a number
 * @n: integer whose square root is
 * evaluated
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);
	else
	return (_pow(n, 0));
}

/**
 * _pow - tests square root
 * @x: integer perfect square to be tested
 * @y: testing integer
 * Return: either square root or -1
 */
int _pow(int x, int y)
{
	if (y * y > x)
	return (-1);
	if (y * y == x)
	return (y);
	return (_pow(x, y + 1));
}

