#include "search_algos.h"
#include <stdio.h>

int binarysearch(int *array, int left, int right, int value);

/**
 * advanced_binary - advanced binary search
 * @array: array to be searched
 * @size: size of array
 * @value: value we are looking for
 * * Return: the index or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	return (binarysearch(array, 0, size - 1, value));
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
		if ((mid == 0 || value > array[mid - 1]) && array[mid] == value)
			return (mid);
		else if (value > array[mid])
			return (binarysearch(array, mid + 1, right, value));
		else if (value == array[mid])
			return (binarysearch(array, left, mid, value));
		else
			return (binarysearch(array, left, mid - 1, value));
	}
	return (-1);
}
