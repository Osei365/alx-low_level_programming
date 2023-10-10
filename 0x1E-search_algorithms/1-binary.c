#include <stdlib.h>
#include <stdio.h>
/**
 * binary_search - search binary
 * @array: array to be search
 * @size: size of array
 * @value: value that is being searched
 * Return: index of value of -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t L = 0, R = size - 1;
	size_t m, a;

	if (array == NULL)
		return (-1);
	while (L <= R)
	{
		printf("Searching in array: ");
		for (a = L; a <= R; a++)
		{
			if (a == R)
				printf("%i\n", array[a]);
			else
				printf("%i, ", array[a]);
		}
		m = (L + R) / 2;
		if (array[m] < value)
		{
			L = m + 1;
		}
		else if (array[m] > value)
		{
			R = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}
