#include "variadic_functions.h"
/**
 * print_strings - prints strings of variable args
 * @separator: separates trings
 * @n: number of args to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	char *ch;

	va_start(args, n);
	for (a = 0; a < n; a++)
	{
		ch = va_arg(args, char*);
		if (ch == NULL)
		ch = "(nil)";
		if (!separator)
		printf("%s", ch);
		else if (separator && a == 0)
		printf("%s", ch);
		else
		printf("%s%s", separator, ch);
	}
	va_end(args);

	printf("\n");
}
