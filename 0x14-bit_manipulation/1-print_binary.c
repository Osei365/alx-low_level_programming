#include "main.h"
/**
 * print_binary - prints binary of a number
 * @n: number to be converted
 * Return: nothing!
 */
void print_binary(unsigned long int n)
{
	if (n >> 1)
	{
		print_binary(n >> 1);
	}
	putchar('0' + (n & 1));
}
