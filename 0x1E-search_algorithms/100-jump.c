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

	if (array == NULL)
		return (-1);
	while (array[min(b, size)] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", a, array[a]);
		a = b;
		b = b + sqrt(size);
		if (a >= size)
			return (-1);
	}
	printf("Value checked array[%lu] = [%i]\n", a, array[a]);
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);
	while (array[a] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", a, array[a]);
		a++;
		if (a == size)
			return (-1);
	}
	printf("Value checked array[%lu] = [%i]\n", a, array[a]);
	if (array[a] == value)
	{
		return (a);
	}
	return (-1);
}
