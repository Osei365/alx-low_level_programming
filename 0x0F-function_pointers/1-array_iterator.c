#include <stdlib.h>
/**
 * array_iterator - prints contents of array indices
 * @array: array
 * @size: size of array
 * @action: fucntion pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int el;
	size_t a;

	if (!array || size <= 0 || !action)
		return;
	for (a = 0; a < size; a++)
	{
		el = array[a];
		action(el);
	}
}
