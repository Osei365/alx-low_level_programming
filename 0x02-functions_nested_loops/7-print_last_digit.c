#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of
 *
 * @n: integer to be evaluated
 *
 * Return: the value of last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	_putchar('0' + abs(ld));
	return (abs(ld));
}


