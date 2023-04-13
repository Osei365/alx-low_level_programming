#include <stdlib.h>
/**
 * array_range - creates an array of int
 * @min: minimum value in range
 * @max: maximum value in range
 * Return: int pointer
 */
int *array_range(int min, int max)
{
	int *result;
	int a = 0;

	if (min > max)
	return (NULL);

	result = (int *)malloc(sizeof(int) * (max - min + 1));
	if (result == NULL)
	return (NULL);

	for (; min <= max; min++, a++)
	{
		result[a] = min;
	}
	return (result);
}
