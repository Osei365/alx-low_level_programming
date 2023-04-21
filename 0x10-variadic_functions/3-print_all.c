#include "variadic_functions.h"
/**
 * print_all - prints all variable args
 * @format: list of variabe types
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *ch, *dlim = "";

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", dlim, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", dlim, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", dlim, va_arg(args, double));
					break;
				case 's':
					ch = va_arg(args, char*);
					if (ch == NULL)
					ch = "(nil)";
					printf("%s%s", dlim,  ch);
					break;
				default:
					i++;
					continue;
			}
			dlim = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(args);
}
