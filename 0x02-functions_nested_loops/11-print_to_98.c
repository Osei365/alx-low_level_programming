#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints natural numbers to 98
 *
 * @n: count starts from integer n
 *
 * Return: always 0 (Success)
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
		{
			n--;
		}
		else
		{
			n++;
		}
	}
	printf("%d\n", 98);
}
