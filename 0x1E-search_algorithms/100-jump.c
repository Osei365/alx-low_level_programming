#include "search_algos.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/**
 * min -  find minimum
 * @a: first item in comparison
 * @b: second
 * Return: minimum
 */
size_t min(size_t a, size_t b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

/**
 * jump_search - jump search algo
 * @array: array to search from
 * @size: size of array
 * @value: value of array
 * Return: index value of -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a, b = 0;
	size_t i;

	if (!array || size == 0)
		return (-1);
	i = sqrt(size);
	while (array[b] < value && b < size)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		a = b;
		b = b + i;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	for (; a <= min(b, size - 1); a++)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
