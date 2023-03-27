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

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
