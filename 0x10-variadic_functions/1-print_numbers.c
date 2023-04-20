#include "variadic_functions.h"
/**
 * print_numbers - print variable args
 * @separator: separates variable args
 * @n: number of args to deal with
 * Return: nothing;
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;

	if (separator != NULL && n != 0)
	{
		va_start(args, n);
		for (a = 0; a < n; a++)
		{
			if (!(a == (n - 1)))
			{
				printf("%d%s", va_arg(args, int), separator);
			}
			else
				printf("%d\n", va_arg(args, int));
		}
		va_end(args);
	}
	else
		printf("\n");
		return;
}
