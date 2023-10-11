#include "search_algos.h"
#include <stdio.h>

int binarysearch(int *array, int left, int right, int value);
int min(int a, int b);

/**
 * exponential_search - exponential search algo
 * @array: array to be searched
 * @size: size f array
 * @value: value we are looking for
 * Return: return index of value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1, upp;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < (int)size && array[i] <= value)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		i = i * 2;
	}
	upp = min(i, size - 1);
	printf("Value found between indexes [%i] and [%i]\n", i / 2, upp);
	return (binarysearch(array, i / 2, upp, value));
}

/**
 * binarysearch - search binary algo
 * @array: array to be searched
 * @left: left boundary
 * @right: right boundary
 * @value: value we are looking for
 * Return: return index of value or -1
 */
int binarysearch(int *array, int left, int right, int value)
{
	int mid, a;

	if (right >= left)
	{
		printf("Searching in array: ");
		for (a = left; a <= right; a++)
		{
			if (a == right)
				printf("%i\n", array[a]);
			else
				printf("%i, ", array[a]);
		}
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (binarysearch(array, left, mid - 1, value));
		return (binarysearch(array, mid + 1, right, value));
	}
	return (-1);
}
/**
 * min - gets minimum of two numbers
 * @a: first number
 * @b: second number
 * Return: minimum number
 */
int min(int a, int b)
{
	return (a < b ? a : b);
}
