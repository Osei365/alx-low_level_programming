#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - sums all variable args
 * @n: needed args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, a;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
