#include <stdio.h>
/**
 * print_diagsums - prints sum of diagonal of
 * a square
 * @a: array of arrays
 * @size: size of square
 * Return: nothing! (void)
 */
void print_diagsums(int *a, int size)
{
	unsigned int sum1, sum2;
	int i;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	while (i < size)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
