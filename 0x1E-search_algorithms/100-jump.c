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
	if (b > a)
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
	size_t a = 0, b = sqrt(size);
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	while (array[b] < value && b < size)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		a = b;
		b = b + sqrt(size);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	for (i = a; i < size && i <= b; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
