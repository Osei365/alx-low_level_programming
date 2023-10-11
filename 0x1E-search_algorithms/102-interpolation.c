#include <stdlib.h>
#include <stdio.h>
/**
 * interpolation_search - search by interpolation
 * @array: array to be searched
 * @size: size of array
 * @value: value we are looking for
 * Return: index of value or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	while (low <= high) 
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]))
		printf("Value checked array[%i] = [%i]\n", mid, array[mid]);
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = low + 1;
		else if (value < array[mid])
			high = high - 1;
	}
	return (-1);
}
