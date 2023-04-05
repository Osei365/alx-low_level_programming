#include "main.h"
/**
 * factorial - calculates the factorial of
 * a number
 * @n: calculate n factorial
 * Return: calculated factorial
 */
int factorial(int n)
{
	unsigned int m;

	if (n < 0)
	return (-1);
	else 
	{
		m = n;
		if (m > 1)
		{
			return (m * factorial(m - 1));
		}
		else
		return (1);
	}
}
