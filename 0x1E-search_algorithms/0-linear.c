#include <stdlib.h>
#include <stdio.h>
/**
 * linear_search - search algorithm linearly
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: index of value or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%lu] = [%i]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}
	return (-1);
}
