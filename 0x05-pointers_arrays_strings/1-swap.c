#include "main.h"
/**
 * swap_int - swaps values of integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 * Return: nothing!
 */
void swap_int(int *a, int *b)
{
	int n1 = *a;
	int n2 = *b;

	*a = n2;
	*b = n1;
}
