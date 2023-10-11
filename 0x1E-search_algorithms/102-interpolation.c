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
	
	mid = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));
	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high])) 
	{
		printf("Value checked array[%i] = [%i]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
		{
			return (mid);
		}
		mid = low + ((value - array[low]) * (high - low) / (array[high] - array[low]));
	}
	printf("Value checked array[%i] is out of range\n", mid);
	if (value == array[low])
	{
		return (low);
	}
	else
		return (-1);
}
