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

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		if(separator == NULL)
		printf("%d", va_arg(args, int));
		else if(separator && a == 0)
		printf("%d", va_arg(args, int));
		else
		printf("%s%d", separator, va_arg(args, int));
	}
	va_end(args);

	printf("\n");
}
