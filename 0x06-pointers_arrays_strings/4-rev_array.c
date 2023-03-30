#include "main.h"
/**
 * reverse_array - reverses tan array of int
 * @a: array to be reversed
 * @n: array size
 * Return: nothing! (void)
 */
void reverse_array(int *a, int n)
{
	int i, in;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		in = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = in;
	}
}
