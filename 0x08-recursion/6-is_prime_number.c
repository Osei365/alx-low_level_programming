#include "main.h"

int prime_checker(int x, int y);

/**
 * is_prime_number - check if an integer is prime
 * @n: integer to be evaluated
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	int checker;

	if (n <= 1)
	return (0);
	checker = prime_checker(n, (n - 1));
	return (checker);
}

/**
 * prime_checker - checks for prime number
 * @x: number to be evaluated
 * @y: number to divide through
 * Return: 1 if prime else 0
 */
int prime_checker(int x, int y)
{
	if (y == 1)
	{
		return (1);
	}
	else
	{
		if (x % y == 0)
		{
			return (0);
		}
		else
		{
			return (prime_checker(x, y - 1));
		}
	}
}
