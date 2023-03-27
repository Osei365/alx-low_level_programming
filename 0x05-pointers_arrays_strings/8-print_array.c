#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elemtes of array
 * @a: array
 * @n: number of times array shoul
 * be printed
 * Return: nothing (void)
 */
void print_array(int *a, int n)
{
	int i;

	if (i <= 0)
	{
		printf(" ");
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", *(a + i));
		}
		else
		{
			printf("%d\n", *(a + i));
		}
	}
}
